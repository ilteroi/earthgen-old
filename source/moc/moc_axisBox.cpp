/****************************************************************************
** Meta object code from reading C++ file 'axisBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/axisBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'axisBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AxisBox_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AxisBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AxisBox_t qt_meta_stringdata_AxisBox = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AxisBox"
QT_MOC_LITERAL(1, 8, 12), // "setSelection"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "Vector3"
QT_MOC_LITERAL(4, 30, 12), // "enableButton"
QT_MOC_LITERAL(5, 43, 16), // "setButtonClicked"
QT_MOC_LITERAL(6, 60, 7) // "setAxis"

    },
    "AxisBox\0setSelection\0\0Vector3\0"
    "enableButton\0setButtonClicked\0setAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AxisBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AxisBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AxisBox *_t = static_cast<AxisBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelection((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 1: _t->enableButton(); break;
        case 2: _t->setButtonClicked(); break;
        case 3: _t->setAxis(); break;
        default: ;
        }
    }
}

const QMetaObject AxisBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_AxisBox.data,
      qt_meta_data_AxisBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AxisBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AxisBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AxisBox.stringdata0))
        return static_cast<void*>(const_cast< AxisBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int AxisBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
