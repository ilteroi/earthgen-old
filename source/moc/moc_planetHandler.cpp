/****************************************************************************
** Meta object code from reading C++ file 'planetHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/planetHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planetHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlanetHandler_t {
    QByteArrayData data[12];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanetHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanetHandler_t qt_meta_stringdata_PlanetHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlanetHandler"
QT_MOC_LITERAL(1, 14, 11), // "axisChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "terrainCreated"
QT_MOC_LITERAL(4, 42, 14), // "climateCreated"
QT_MOC_LITERAL(5, 57, 16), // "climateDestroyed"
QT_MOC_LITERAL(6, 74, 7), // "setAxis"
QT_MOC_LITERAL(7, 82, 7), // "Vector3"
QT_MOC_LITERAL(8, 90, 15), // "generateTerrain"
QT_MOC_LITERAL(9, 106, 18), // "Terrain_parameters"
QT_MOC_LITERAL(10, 125, 15), // "generateClimate"
QT_MOC_LITERAL(11, 141, 18) // "Climate_parameters"

    },
    "PlanetHandler\0axisChanged\0\0terrainCreated\0"
    "climateCreated\0climateDestroyed\0setAxis\0"
    "Vector3\0generateTerrain\0Terrain_parameters\0"
    "generateClimate\0Climate_parameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanetHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void PlanetHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanetHandler *_t = static_cast<PlanetHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisChanged(); break;
        case 1: _t->terrainCreated(); break;
        case 2: _t->climateCreated(); break;
        case 3: _t->climateDestroyed(); break;
        case 4: _t->setAxis((*reinterpret_cast< Vector3(*)>(_a[1]))); break;
        case 5: _t->generateTerrain((*reinterpret_cast< const Terrain_parameters(*)>(_a[1]))); break;
        case 6: _t->generateClimate((*reinterpret_cast< const Climate_parameters(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlanetHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanetHandler::axisChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlanetHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanetHandler::terrainCreated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlanetHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanetHandler::climateCreated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlanetHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanetHandler::climateDestroyed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject PlanetHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlanetHandler.data,
      qt_meta_data_PlanetHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlanetHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanetHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlanetHandler.stringdata0))
        return static_cast<void*>(const_cast< PlanetHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PlanetHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PlanetHandler::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PlanetHandler::terrainCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PlanetHandler::climateCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PlanetHandler::climateDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
