/****************************************************************************
** Meta object code from reading C++ file 'db_funct.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DBP/db_funct.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'db_funct.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DB_funct_t {
    QByteArrayData data[8];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DB_funct_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DB_funct_t qt_meta_stringdata_DB_funct = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DB_funct"
QT_MOC_LITERAL(1, 9, 7), // "slot_in"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "slot_find"
QT_MOC_LITERAL(4, 28, 11), // "slot_borrow"
QT_MOC_LITERAL(5, 40, 11), // "slot_return"
QT_MOC_LITERAL(6, 52, 13), // "slot_add_card"
QT_MOC_LITERAL(7, 66, 13) // "slot_del_card"

    },
    "DB_funct\0slot_in\0\0slot_find\0slot_borrow\0"
    "slot_return\0slot_add_card\0slot_del_card"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DB_funct[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DB_funct::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DB_funct *_t = static_cast<DB_funct *>(_o);
        switch (_id) {
        case 0: _t->slot_in(); break;
        case 1: _t->slot_find(); break;
        case 2: _t->slot_borrow(); break;
        case 3: _t->slot_return(); break;
        case 4: _t->slot_add_card(); break;
        case 5: _t->slot_del_card(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DB_funct::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DB_funct.data,
      qt_meta_data_DB_funct,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DB_funct::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DB_funct::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DB_funct.stringdata))
        return static_cast<void*>(const_cast< DB_funct*>(this));
    if (!strcmp(_clname, "Ui::DB_funct"))
        return static_cast< Ui::DB_funct*>(const_cast< DB_funct*>(this));
    return QDialog::qt_metacast(_clname);
}

int DB_funct::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
