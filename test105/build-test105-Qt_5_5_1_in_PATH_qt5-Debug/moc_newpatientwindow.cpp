/****************************************************************************
** Meta object code from reading C++ file 'newpatientwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test105/Headers/newpatientwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpatientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NewPatientWindow_t {
    QByteArrayData data[13];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewPatientWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewPatientWindow_t qt_meta_stringdata_NewPatientWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "NewPatientWindow"
QT_MOC_LITERAL(1, 17, 20), // "on_btn_reset_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "showTime"
QT_MOC_LITERAL(4, 48, 7), // "onReset"
QT_MOC_LITERAL(5, 56, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(6, 74, 27), // "on_btn_addphysician_clicked"
QT_MOC_LITERAL(7, 102, 30), // "on_btn_addrefphysician_clicked"
QT_MOC_LITERAL(8, 133, 28), // "on_btn_adddepartment_clicked"
QT_MOC_LITERAL(9, 162, 30), // "on_btn_deletephysician_clicked"
QT_MOC_LITERAL(10, 193, 33), // "on_btn_deleterefphysician_cli..."
QT_MOC_LITERAL(11, 227, 31), // "on_btn_deletedepartment_clicked"
QT_MOC_LITERAL(12, 259, 31) // "on_dateEdit_dob_editingFinished"

    },
    "NewPatientWindow\0on_btn_reset_clicked\0"
    "\0showTime\0onReset\0on_btn_ok_clicked\0"
    "on_btn_addphysician_clicked\0"
    "on_btn_addrefphysician_clicked\0"
    "on_btn_adddepartment_clicked\0"
    "on_btn_deletephysician_clicked\0"
    "on_btn_deleterefphysician_clicked\0"
    "on_btn_deletedepartment_clicked\0"
    "on_dateEdit_dob_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewPatientWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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

       0        // eod
};

void NewPatientWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewPatientWindow *_t = static_cast<NewPatientWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_reset_clicked(); break;
        case 1: _t->showTime(); break;
        case 2: _t->onReset(); break;
        case 3: _t->on_btn_ok_clicked(); break;
        case 4: _t->on_btn_addphysician_clicked(); break;
        case 5: _t->on_btn_addrefphysician_clicked(); break;
        case 6: _t->on_btn_adddepartment_clicked(); break;
        case 7: _t->on_btn_deletephysician_clicked(); break;
        case 8: _t->on_btn_deleterefphysician_clicked(); break;
        case 9: _t->on_btn_deletedepartment_clicked(); break;
        case 10: _t->on_dateEdit_dob_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NewPatientWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NewPatientWindow.data,
      qt_meta_data_NewPatientWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NewPatientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewPatientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NewPatientWindow.stringdata0))
        return static_cast<void*>(const_cast< NewPatientWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NewPatientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
