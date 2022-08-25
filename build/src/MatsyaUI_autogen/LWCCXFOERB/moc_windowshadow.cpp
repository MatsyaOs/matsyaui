/****************************************************************************
** Meta object code from reading C++ file 'windowshadow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/platforms/linux/shadowhelper/windowshadow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowshadow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowShadow_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowShadow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowShadow_t qt_meta_stringdata_WindowShadow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WindowShadow"
QT_MOC_LITERAL(1, 13, 15), // "geometryChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 45, 11), // "viewChanged"
QT_MOC_LITERAL(5, 57, 12), // "edgesChanged"
QT_MOC_LITERAL(6, 70, 13), // "radiusChanged"
QT_MOC_LITERAL(7, 84, 15), // "strengthChanged"
QT_MOC_LITERAL(8, 100, 20), // "onViewVisibleChanged"
QT_MOC_LITERAL(9, 121, 4), // "view"
QT_MOC_LITERAL(10, 126, 8), // "QWindow*"
QT_MOC_LITERAL(11, 135, 8), // "geometry"
QT_MOC_LITERAL(12, 144, 6), // "radius"
QT_MOC_LITERAL(13, 151, 8) // "strength"

    },
    "WindowShadow\0geometryChanged\0\0"
    "enabledChanged\0viewChanged\0edgesChanged\0"
    "radiusChanged\0strengthChanged\0"
    "onViewVisibleChanged\0view\0QWindow*\0"
    "geometry\0radius\0strength"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowShadow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::QRect, 0x00495103,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       2,
       0,
       4,
       5,

       0        // eod
};

void WindowShadow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowShadow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->viewChanged(); break;
        case 3: _t->edgesChanged(); break;
        case 4: _t->radiusChanged(); break;
        case 5: _t->strengthChanged(); break;
        case 6: _t->onViewVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::geometryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::viewChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::edgesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::radiusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WindowShadow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowShadow::strengthChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWindow* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WindowShadow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWindow**>(_v) = _t->view(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->strength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WindowShadow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setView(*reinterpret_cast< QWindow**>(_v)); break;
        case 1: _t->setGeometry(*reinterpret_cast< QRect*>(_v)); break;
        case 2: _t->setRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setStrength(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WindowShadow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WindowShadow.data,
    qt_meta_data_WindowShadow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowShadow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowShadow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowShadow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowShadow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WindowShadow::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WindowShadow::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WindowShadow::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WindowShadow::edgesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WindowShadow::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WindowShadow::strengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
