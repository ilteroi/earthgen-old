/****************************************************************************
** Meta object code from reading C++ file 'planetWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/planetWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planetWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlanetWidget_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanetWidget_t qt_meta_stringdata_PlanetWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlanetWidget"
QT_MOC_LITERAL(1, 13, 13), // "pointSelected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Vector3"
QT_MOC_LITERAL(4, 36, 6), // "update"
QT_MOC_LITERAL(5, 43, 21), // "activateGlobeRenderer"
QT_MOC_LITERAL(6, 65, 19), // "activateMapRenderer"
QT_MOC_LITERAL(7, 85, 14), // "updateGeometry"
QT_MOC_LITERAL(8, 100, 11) // "initColours"

    },
    "PlanetWidget\0pointSelected\0\0Vector3\0"
    "update\0activateGlobeRenderer\0"
    "activateMapRenderer\0updateGeometry\0"
    "initColours"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlanetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanetWidget *_t = static_cast<PlanetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointSelected((*reinterpret_cast< Vector3(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->activateGlobeRenderer(); break;
        case 3: _t->activateMapRenderer(); break;
        case 4: _t->updateGeometry(); break;
        case 5: _t->initColours(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlanetWidget::*_t)(Vector3 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanetWidget::pointSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlanetWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_PlanetWidget.data,
      qt_meta_data_PlanetWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlanetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlanetWidget.stringdata0))
        return static_cast<void*>(const_cast< PlanetWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int PlanetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PlanetWidget::pointSelected(Vector3 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
