/****************************************************************************
** Meta object code from reading C++ file 'db_add_card.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DBP/db_add_card.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'db_add_card.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DB_Add_Card_t {
    QByteArrayData data[8];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DB_Add_Card_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DB_Add_Card_t qt_meta_stringdata_DB_Add_Card = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DB_Add_Card"
QT_MOC_LITERAL(1, 12, 10), // "all_filled"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "not_all_filled"
QT_MOC_LITERAL(4, 39, 15), // "check_if_filled"
QT_MOC_LITERAL(5, 55, 13), // "enable_insert"
QT_MOC_LITERAL(6, 69, 14), // "disable_insert"
QT_MOC_LITERAL(7, 84, 11) // "slot_insert"

    },
    "DB_Add_Card\0all_filled\0\0not_all_filled\0"
    "check_if_filled\0enable_insert\0"
    "disable_insert\0slot_insert"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DB_Add_Card[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DB_Add_Card::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DB_Add_Card *_t = static_cast<DB_Add_Card *>(_o);
        switch (_id) {
        case 0: _t->all_filled(); break;
        case 1: _t->not_all_filled(); break;
        case 2: _t->check_if_filled(); break;
        case 3: _t->enable_insert(); break;
        case 4: _t->disable_insert(); break;
        case 5: _t->slot_insert(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DB_Add_Card::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DB_Add_Card::all_filled)) {
                *result = 0;
            }
        }
        {
            typedef void (DB_Add_Card::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DB_Add_Card::not_all_filled)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DB_Add_Card::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DB_Add_Card.data,
      qt_meta_data_DB_Add_Card,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DB_Add_Card::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DB_Add_Card::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DB_Add_Card.stringdata))
        return static_cast<void*>(const_cast< DB_Add_Card*>(this));
    return QDialog::qt_metacast(_clname);
}

int DB_Add_Card::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DB_Add_Card::all_filled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DB_Add_Card::not_all_filled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
