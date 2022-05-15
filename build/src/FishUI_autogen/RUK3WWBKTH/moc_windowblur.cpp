/****************************************************************************
** Meta object code from reading C++ file 'windowblur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/platforms/linux/blurhelper/windowblur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowblur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowBlur_t {
    QByteArrayData data[12];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowBlur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowBlur_t qt_meta_stringdata_WindowBlur = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WindowBlur"
QT_MOC_LITERAL(1, 11, 11), // "viewChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 39, 19), // "windowRadiusChanged"
QT_MOC_LITERAL(5, 59, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 75, 20), // "onViewVisibleChanged"
QT_MOC_LITERAL(7, 96, 4), // "view"
QT_MOC_LITERAL(8, 101, 8), // "QWindow*"
QT_MOC_LITERAL(9, 110, 8), // "geometry"
QT_MOC_LITERAL(10, 119, 7), // "enabled"
QT_MOC_LITERAL(11, 127, 12) // "windowRadius"

    },
    "WindowBlur\0viewChanged\0\0enabledChanged\0"
    "windowRadiusChanged\0geometryChanged\0"
    "onViewVisibleChanged\0view\0QWindow*\0"
    "geometry\0enabled\0windowRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowBlur[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::QRect, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       1,
       2,

       0        // eod
};

void WindowBlur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowBlur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewChanged(); break;
        case 1: _t->enabledChanged(); break;
        case 2: _t->windowRadiusChanged(); break;
        case 3: _t->geometryChanged(); break;
        case 4: _t->onViewVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowBlur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowBlur::viewChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowBlur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowBlur::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowBlur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowBlur::windowRadiusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowBlur::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowBlur::geometryChanged)) {
                *result = 3;
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
        auto *_t = static_cast<WindowBlur *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWindow**>(_v) = _t->view(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->windowRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WindowBlur *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setView(*reinterpret_cast< QWindow**>(_v)); break;
        case 1: _t->setGeometry(*reinterpret_cast< QRect*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setWindowRadius(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WindowBlur::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WindowBlur.data,
    qt_meta_data_WindowBlur,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowBlur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowBlur::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowBlur.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowBlur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WindowBlur::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WindowBlur::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WindowBlur::windowRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WindowBlur::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
