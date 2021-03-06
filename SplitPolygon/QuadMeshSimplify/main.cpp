
#include <iostream>
#include <Eigen/Dense>
#include "ExtraFunc.h"
#include "QuadMesh.h"
#include "QuadMeshIO.h"
#include "BaseComplex.h"
#include "Pipeline.h"
#include "AssistFunc.h"
#include "CrossfieldDesign.h"
#include "GeoPolyReadWrite.h"
#include "PolySplit.h"
#include "MainGlobalFunction.h"
#include <ctime>
#include <string>
#include <fstream>
#include <windows.h>
#include <OpenMesh/Core/IO/MeshIO.hh>
//#include <ANN/kd_tree.h>

#define OUTPUT_TRI_AND_FIELDS 0
#define TEST_SPLIT 1

using namespace BaseDataStructure;
using namespace DataOperation;


void main(int argc, char *argv[])
{
	std::string path, filee, fileName, formatName;
	SplitPathAndFile(argv[1], path, filee);
	SplitFileAndFormat(filee, fileName, formatName);

	/*QuadMeshIO qmi;
	QuadMesh qmm;
	qmi.ReadQuadMesh(&qmm, argv[1]);
	if (!qmm.BuildConnectivity())
		return;

	Pipeline::RefineQuadToTri(qmm, Pipeline::triMesh_);
	OpenMesh::IO::write_mesh(Pipeline::triMesh_, argv[1]);
	exit(4);*/

	//MyMesh sourceMesh;
	//OpenMesh::IO::read_mesh(sourceMesh, "C:\\Users\\ChiZhang\\Desktop\\aircraft.obj"/*argv[1]*/);
	//MeshRequest(sourceMesh);
	//MyMesh tempMesh;
	//RefineTri(sourceMesh, tempMesh, sourceMesh.n_faces() * 7);
	//OpenMesh::IO::write_mesh(tempMesh, "C:\\Users\\ChiZhang\\Desktop\\aircraft2.obj");
	//exit(3);

	std::vector<OpenMesh::Vec3d> midPoints;
	std::vector<Eigen::Vector3d> eFields;
	ReadMeshBuildField(std::string(argv[1]), eFields, midPoints);
	std::vector<Eigen::Vector2d> poly, sourcePoly;
	std::vector<bool> polyAddNew;

	std::vector<uint32_t> polyToQuad;
	GetTriMeshPoly/*Version2*/(Pipeline::triMesh_, poly, polyAddNew, polyToQuad);
	sourcePoly = poly;

	/*QuadMeshIO qmi;
	QuadMesh qm;
	qmi.ReadQuadMesh(&qm, argv[1]);
	if (!qm.BuildConnectivity())
		return;*/

	/*double radio = 0;
	Eigen::Vector2d minP;*/
	//qm.ScaleQuadMesh(0.3, radio, minP);	//似乎平均长度0.3比较好 

	//triangle and fields
	/*std::vector<OpenMesh::Vec3d> fields, midPoints;
	BuildTriangleFiled(qm, fields, midPoints);
	std::vector<Eigen::Vector3d> eFields;
	TransVec3d(fields, eFields);*/

	/*BaseComplex bc;
	bc.ExtractBaseComplex(&qm, FEATURE_THRESHOLD);*/

	/*if (bc.isError_)
		return;*/

	QuadMesh qm;
	BaseComplex bc;
	Pipeline pl(qm, bc, eFields, false);
	pl.BuildKDTree(midPoints);
	//pl.ComputeInitialGenus(qm);

	//std::vector<Eigen::Vector2d> sourcePoly;
	//GeoPolyReadWrite::ReadGeoToPoly("C:\\Users\\ChiZhang\\Desktop\\TestSplit\\9_24\\6\\0_geo6.geo", sourcePoly);
	//GeoPolyReadWrite::ReadGeoToPoly(argv[2], sourcePoly);
	int pieceNum = std::stoi(std::string(argv[3]));
	int outNum = std::stoi(std::string(argv[4]));

	std::srand((unsigned int)std::time(NULL));
	for (int i = 0; i < outNum; ++i)
	{
		PolySplit ps;
		ps.SetFields(eFields);
		ps.SetKdTree(pl.kdTree_);
		//	ps.SplitPoly(sourcePoly);
		ps.SplitPoly(poly, polyAddNew, pieceNum, outNum);

		std::vector<std::vector<Eigen::Vector2d>> polys;
		//	ps.TranslateToEigenPoly(polys);
		ps.OutputPolysWithoutSelfIntersection();
		ps.TranslateToEigenPolyFromFs(polys);
		std::string folderPath = std::string(argv[2]) + fileName;
		bool flag = CreateDirectory(folderPath.c_str(), NULL);
		/*for (int i = 0; i < polys.size(); ++i)
		{
			std::string fileName(folderPath);
			fileName += "/";
			fileName += std::to_string(i);
			fileName += ".geo";
			GeoPolyReadWrite::WritePolyToGeo(fileName.c_str(), polys[i]);
		}*/

		/*std::string splitEdgesInfoFile = folderPath + "/splitEdgesInfo.txt";
		ps.OutputSplitEdgesInfo(splitEdgesInfoFile);*/
		/*std::string polyTopoInfoFile = folderPath + "/" + fileName + ".pti";
		ps.OutputPolysInfo(polyTopoInfoFile);*/

		std::string edgesInfoFile = folderPath + "/" + fileName + "_" + std::to_string(i) + ".txt";
		ps.OutputInnerEdgesInfo(edgesInfoFile, polyToQuad, sourcePoly);
	}
	exit(0);
}

