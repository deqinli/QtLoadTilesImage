/****************************************************************************
** Meta object code from reading C++ file 'CompositeTileSourceWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../CompositeTileSourceWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompositeTileSourceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompositeTileSourceWidget_t {
    QByteArrayData data[11];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompositeTileSourceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompositeTileSourceWidget_t qt_meta_stringdata_CompositeTileSourceWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "CompositeTileSourceWidget"
QT_MOC_LITERAL(1, 26, 29), // "handleCurrentSelectionChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 69, 21), // "handleCompositeChange"
QT_MOC_LITERAL(5, 91, 15), // "addOSMTileLayer"
QT_MOC_LITERAL(6, 107, 29), // "on_removeSourceButton_clicked"
QT_MOC_LITERAL(7, 137, 29), // "on_opacitySlider_valueChanged"
QT_MOC_LITERAL(8, 167, 5), // "value"
QT_MOC_LITERAL(9, 173, 25), // "on_moveDownButton_clicked"
QT_MOC_LITERAL(10, 199, 22) // "on_moveUpButton_cicked"

    },
    "CompositeTileSourceWidget\0"
    "handleCurrentSelectionChanged\0\0"
    "QModelIndex\0handleCompositeChange\0"
    "addOSMTileLayer\0on_removeSourceButton_clicked\0"
    "on_opacitySlider_valueChanged\0value\0"
    "on_moveDownButton_clicked\0"
    "on_moveUpButton_cicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompositeTileSourceWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       4,    0,   54,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CompositeTileSourceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompositeTileSourceWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleCurrentSelectionChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 1: _t->handleCompositeChange(); break;
        case 2: _t->addOSMTileLayer(); break;
        case 3: _t->on_removeSourceButton_clicked(); break;
        case 4: _t->on_opacitySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_moveDownButton_clicked(); break;
        case 6: _t->on_moveUpButton_cicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CompositeTileSourceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CompositeTileSourceWidget.data,
    qt_meta_data_CompositeTileSourceWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CompositeTileSourceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompositeTileSourceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompositeTileSourceWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CompositeTileSourceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
