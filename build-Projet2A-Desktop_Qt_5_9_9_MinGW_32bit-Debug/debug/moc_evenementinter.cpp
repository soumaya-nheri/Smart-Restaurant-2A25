/****************************************************************************
** Meta object code from reading C++ file 'evenementinter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projet2A/evenementinter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'evenementinter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EvenementInter_t {
    QByteArrayData data[10];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EvenementInter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EvenementInter_t qt_meta_stringdata_EvenementInter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EvenementInter"
QT_MOC_LITERAL(1, 15, 24), // "on_AjouterBouton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_SupprimerBouton_clicked"
QT_MOC_LITERAL(4, 68, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(5, 100, 4), // "arg1"
QT_MOC_LITERAL(6, 105, 37), // "on_comboBox_modif_currentInde..."
QT_MOC_LITERAL(7, 143, 21), // "on_modifiebtn_clicked"
QT_MOC_LITERAL(8, 165, 7), // "refresh"
QT_MOC_LITERAL(9, 173, 14) // "on_PDF_clicked"

    },
    "EvenementInter\0on_AjouterBouton_clicked\0"
    "\0on_SupprimerBouton_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_comboBox_modif_currentIndexChanged\0"
    "on_modifiebtn_clicked\0refresh\0"
    "on_PDF_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EvenementInter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EvenementInter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EvenementInter *_t = static_cast<EvenementInter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AjouterBouton_clicked(); break;
        case 1: _t->on_SupprimerBouton_clicked(); break;
        case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_modif_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_modifiebtn_clicked(); break;
        case 5: _t->refresh(); break;
        case 6: _t->on_PDF_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject EvenementInter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EvenementInter.data,
      qt_meta_data_EvenementInter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EvenementInter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EvenementInter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EvenementInter.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EvenementInter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
