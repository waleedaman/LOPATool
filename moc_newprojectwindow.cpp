/****************************************************************************
** Meta object code from reading C++ file 'newprojectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "newprojectwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newprojectwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewProjectWindow_t {
    const uint offsetsAndSize[14];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NewProjectWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NewProjectWindow_t qt_meta_stringdata_NewProjectWindow = {
    {
QT_MOC_LITERAL(0, 16), // "NewProjectWindow"
QT_MOC_LITERAL(17, 19), // "on_user_textChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 4), // "arg1"
QT_MOC_LITERAL(43, 27), // "on_organization_textChanged"
QT_MOC_LITERAL(71, 20), // "on_title_textChanged"
QT_MOC_LITERAL(92, 16) // "on_okBtn_clicked"

    },
    "NewProjectWindow\0on_user_textChanged\0"
    "\0arg1\0on_organization_textChanged\0"
    "on_title_textChanged\0on_okBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewProjectWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    0 /* Private */,
       4,    1,   41,    2, 0x08,    2 /* Private */,
       5,    1,   44,    2, 0x08,    4 /* Private */,
       6,    0,   47,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void NewProjectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewProjectWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_user_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_organization_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_title_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_okBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NewProjectWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_NewProjectWindow.offsetsAndSize,
    qt_meta_data_NewProjectWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NewProjectWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *NewProjectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewProjectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewProjectWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewProjectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
