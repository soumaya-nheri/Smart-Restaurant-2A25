/****************************************************************************
** Meta object code from reading C++ file 'seconddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Arduino_cc3/seconddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seconddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_secondDialog_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_secondDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_secondDialog_t qt_meta_stringdata_secondDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "secondDialog"
QT_MOC_LITERAL(1, 13, 11), // "Statistique"
QT_MOC_LITERAL(2, 25, 15), // "QVector<double>"
QT_MOC_LITERAL(3, 41, 0), // ""
QT_MOC_LITERAL(4, 42, 8), // "makePlot"
QT_MOC_LITERAL(5, 51, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 73, 19) // "on_afficher_clicked"

    },
    "secondDialog\0Statistique\0QVector<double>\0"
    "\0makePlot\0on_pushButton_clicked\0"
    "on_afficher_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_secondDialog[] = {

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
       1,    0,   34,    3, 0x08 /* Private */,
       4,    0,   35,    3, 0x08 /* Private */,
       5,    0,   36,    3, 0x08 /* Private */,
       6,    0,   37,    3, 0x08 /* Private */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void secondDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        secondDialog *_t = static_cast<secondDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVector<double> _r = _t->Statistique();
            if (_a[0]) *reinterpret_cast< QVector<double>*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->makePlot(); break;

        case 3: _t->on_afficher_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject secondDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_secondDialog.data,
      qt_meta_data_secondDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *secondDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *secondDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_secondDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int secondDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
