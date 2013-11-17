/****************************************************************************
** Meta object code from reading C++ file 'fenetreprincipale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI_DESSIN2D/fenetreprincipale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetreprincipale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fenetrePrincipale_t {
    QByteArrayData data[6];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_fenetrePrincipale_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_fenetrePrincipale_t qt_meta_stringdata_fenetrePrincipale = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 21),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 18),
QT_MOC_LITERAL(4, 60, 12),
QT_MOC_LITERAL(5, 73, 19)
    },
    "fenetrePrincipale\0on_btnSegment_clicked\0"
    "\0annuleNouveauObjet\0nouveauObjet\0"
    "on_btnCarre_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fenetrePrincipale[] = {

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
       1,    0,   34,    2, 0x08,
       3,    0,   35,    2, 0x08,
       4,    0,   36,    2, 0x08,
       5,    0,   37,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fenetrePrincipale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fenetrePrincipale *_t = static_cast<fenetrePrincipale *>(_o);
        switch (_id) {
        case 0: _t->on_btnSegment_clicked(); break;
        case 1: _t->annuleNouveauObjet(); break;
        case 2: _t->nouveauObjet(); break;
        case 3: _t->on_btnCarre_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject fenetrePrincipale::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fenetrePrincipale.data,
      qt_meta_data_fenetrePrincipale,  qt_static_metacall, 0, 0}
};


const QMetaObject *fenetrePrincipale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fenetrePrincipale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fenetrePrincipale.stringdata))
        return static_cast<void*>(const_cast< fenetrePrincipale*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fenetrePrincipale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
