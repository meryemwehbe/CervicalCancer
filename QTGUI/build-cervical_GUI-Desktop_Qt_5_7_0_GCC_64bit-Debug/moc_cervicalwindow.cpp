/****************************************************************************
** Meta object code from reading C++ file 'cervicalwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cervicalguidev/cervicalwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cervicalwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CervicalWindow_t {
    QByteArrayData data[17];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CervicalWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CervicalWindow_t qt_meta_stringdata_CervicalWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CervicalWindow"
QT_MOC_LITERAL(1, 15, 17), // "on_browse_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "on_generate_clicked"
QT_MOC_LITERAL(4, 54, 20), // "on_check_pos_clicked"
QT_MOC_LITERAL(5, 75, 20), // "on_check_neg_clicked"
QT_MOC_LITERAL(6, 96, 22), // "on_browse_path_clicked"
QT_MOC_LITERAL(7, 119, 25), // "on_checkNorm_stateChanged"
QT_MOC_LITERAL(8, 145, 4), // "arg1"
QT_MOC_LITERAL(9, 150, 10), // "Mat2QImage"
QT_MOC_LITERAL(10, 161, 3), // "Mat"
QT_MOC_LITERAL(11, 165, 3), // "src"
QT_MOC_LITERAL(12, 169, 20), // "on_check_log_clicked"
QT_MOC_LITERAL(13, 190, 20), // "on_check_exp_clicked"
QT_MOC_LITERAL(14, 211, 16), // "on_apply_clicked"
QT_MOC_LITERAL(15, 228, 16), // "on_reset_clicked"
QT_MOC_LITERAL(16, 245, 15) // "on_crop_clicked"

    },
    "CervicalWindow\0on_browse_clicked\0\0"
    "on_generate_clicked\0on_check_pos_clicked\0"
    "on_check_neg_clicked\0on_browse_path_clicked\0"
    "on_checkNorm_stateChanged\0arg1\0"
    "Mat2QImage\0Mat\0src\0on_check_log_clicked\0"
    "on_check_exp_clicked\0on_apply_clicked\0"
    "on_reset_clicked\0on_crop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CervicalWindow[] = {

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
       7,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,
      15,    0,   88,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::QImage, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CervicalWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CervicalWindow *_t = static_cast<CervicalWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_browse_clicked(); break;
        case 1: _t->on_generate_clicked(); break;
        case 2: _t->on_check_pos_clicked(); break;
        case 3: _t->on_check_neg_clicked(); break;
        case 4: _t->on_browse_path_clicked(); break;
        case 5: _t->on_checkNorm_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { QImage _r = _t->Mat2QImage((*reinterpret_cast< const Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = _r; }  break;
        case 7: _t->on_check_log_clicked(); break;
        case 8: _t->on_check_exp_clicked(); break;
        case 9: _t->on_apply_clicked(); break;
        case 10: _t->on_reset_clicked(); break;
        case 11: _t->on_crop_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CervicalWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CervicalWindow.data,
      qt_meta_data_CervicalWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CervicalWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CervicalWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CervicalWindow.stringdata0))
        return static_cast<void*>(const_cast< CervicalWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CervicalWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
