/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MIPS_IDE/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "slot_new"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "open_Asm"
QT_MOC_LITERAL(4, 30, 8), // "open_Bin"
QT_MOC_LITERAL(5, 39, 8), // "open_Coe"
QT_MOC_LITERAL(6, 48, 9), // "slot_save"
QT_MOC_LITERAL(7, 58, 11), // "save_as_Asm"
QT_MOC_LITERAL(8, 70, 11), // "save_as_Bin"
QT_MOC_LITERAL(9, 82, 11), // "save_as_Coe"
QT_MOC_LITERAL(10, 94, 14), // "slot_build_asm"
QT_MOC_LITERAL(11, 109, 14), // "slot_build_bin"
QT_MOC_LITERAL(12, 124, 14), // "slot_build_coe"
QT_MOC_LITERAL(13, 139, 20) // "slot_enable_textedit"

    },
    "MainWindow\0slot_new\0\0open_Asm\0open_Bin\0"
    "open_Coe\0slot_save\0save_as_Asm\0"
    "save_as_Bin\0save_as_Coe\0slot_build_asm\0"
    "slot_build_bin\0slot_build_coe\0"
    "slot_enable_textedit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->slot_new(); break;
        case 1: _t->open_Asm(); break;
        case 2: _t->open_Bin(); break;
        case 3: _t->open_Coe(); break;
        case 4: _t->slot_save(); break;
        case 5: _t->save_as_Asm(); break;
        case 6: _t->save_as_Bin(); break;
        case 7: _t->save_as_Coe(); break;
        case 8: _t->slot_build_asm(); break;
        case 9: _t->slot_build_bin(); break;
        case 10: _t->slot_build_coe(); break;
        case 11: _t->slot_enable_textedit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
