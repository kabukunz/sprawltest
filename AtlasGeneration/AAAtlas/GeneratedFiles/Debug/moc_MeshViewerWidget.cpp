/****************************************************************************
** Meta object code from reading C++ file 'MeshViewerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MeshViewer/MeshViewerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeshViewerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MeshViewerWidget_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshViewerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshViewerWidget_t qt_meta_stringdata_MeshViewerWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MeshViewerWidget"
QT_MOC_LITERAL(1, 17, 10), // "loadMeshOK"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "updateMeshSignal"
QT_MOC_LITERAL(4, 46, 16), // "updateEdgeSignal"
QT_MOC_LITERAL(5, 63, 16), // "updateFaceSignal"
QT_MOC_LITERAL(6, 80, 16) // "setPipelinePhase"

    },
    "MeshViewerWidget\0loadMeshOK\0\0"
    "updateMeshSignal\0updateEdgeSignal\0"
    "updateFaceSignal\0setPipelinePhase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshViewerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    0,   44,    2, 0x06 /* Public */,
       4,    3,   45,    2, 0x06 /* Public */,
       5,    3,   52,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MeshViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MeshViewerWidget *_t = static_cast<MeshViewerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadMeshOK((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->updateMeshSignal(); break;
        case 2: _t->updateEdgeSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->updateFaceSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->setPipelinePhase((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MeshViewerWidget::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeshViewerWidget::loadMeshOK)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MeshViewerWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeshViewerWidget::updateMeshSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MeshViewerWidget::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeshViewerWidget::updateEdgeSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MeshViewerWidget::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeshViewerWidget::updateFaceSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MeshViewerWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MeshViewerWidget::setPipelinePhase)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MeshViewerWidget::staticMetaObject = {
    { &QGLViewerWidget::staticMetaObject, qt_meta_stringdata_MeshViewerWidget.data,
      qt_meta_data_MeshViewerWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MeshViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MeshViewerWidget.stringdata0))
        return static_cast<void*>(const_cast< MeshViewerWidget*>(this));
    return QGLViewerWidget::qt_metacast(_clname);
}

int MeshViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewerWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MeshViewerWidget::loadMeshOK(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MeshViewerWidget::updateMeshSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MeshViewerWidget::updateEdgeSignal(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MeshViewerWidget::updateFaceSignal(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MeshViewerWidget::setPipelinePhase(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
