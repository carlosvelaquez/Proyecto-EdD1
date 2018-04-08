/****************************************************************************
** Meta object code from reading C++ file 'mstwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mstwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mstwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSTWindow_t {
    QByteArrayData data[7];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MSTWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MSTWindow_t qt_meta_stringdata_MSTWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MSTWindow"
QT_MOC_LITERAL(1, 10, 28), // "on_botonCrearVertice_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "on_botonNuevoGrafo_clicked"
QT_MOC_LITERAL(4, 67, 32), // "on_botonConectarVertices_clicked"
QT_MOC_LITERAL(5, 100, 25), // "on_pbEncontrarMST_clicked"
QT_MOC_LITERAL(6, 126, 21) // "on_pbRevertir_clicked"

    },
    "MSTWindow\0on_botonCrearVertice_clicked\0"
    "\0on_botonNuevoGrafo_clicked\0"
    "on_botonConectarVertices_clicked\0"
    "on_pbEncontrarMST_clicked\0"
    "on_pbRevertir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSTWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MSTWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MSTWindow *_t = static_cast<MSTWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_botonCrearVertice_clicked(); break;
        case 1: _t->on_botonNuevoGrafo_clicked(); break;
        case 2: _t->on_botonConectarVertices_clicked(); break;
        case 3: _t->on_pbEncontrarMST_clicked(); break;
        case 4: _t->on_pbRevertir_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MSTWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MSTWindow.data,
      qt_meta_data_MSTWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MSTWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSTWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSTWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MSTWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
