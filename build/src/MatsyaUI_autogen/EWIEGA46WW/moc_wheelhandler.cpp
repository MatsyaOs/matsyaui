/****************************************************************************
** Meta object code from reading C++ file 'wheelhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/wheelhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wheelhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KirigamiWheelEvent_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KirigamiWheelEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KirigamiWheelEvent_t qt_meta_stringdata_KirigamiWheelEvent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KirigamiWheelEvent"
QT_MOC_LITERAL(1, 19, 1), // "x"
QT_MOC_LITERAL(2, 21, 1), // "y"
QT_MOC_LITERAL(3, 23, 10), // "angleDelta"
QT_MOC_LITERAL(4, 34, 10), // "pixelDelta"
QT_MOC_LITERAL(5, 45, 7), // "buttons"
QT_MOC_LITERAL(6, 53, 9), // "modifiers"
QT_MOC_LITERAL(7, 63, 8), // "inverted"
QT_MOC_LITERAL(8, 72, 8) // "accepted"

    },
    "KirigamiWheelEvent\0x\0y\0angleDelta\0"
    "pixelDelta\0buttons\0modifiers\0inverted\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KirigamiWheelEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095401,
       2, QMetaType::QReal, 0x00095401,
       3, QMetaType::QPointF, 0x00095401,
       4, QMetaType::QPointF, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KirigamiWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->pixelDelta(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KirigamiWheelEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KirigamiWheelEvent.data,
    qt_meta_data_KirigamiWheelEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KirigamiWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KirigamiWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KirigamiWheelEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KirigamiWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_GlobalWheelFilter_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalWheelFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalWheelFilter_t qt_meta_stringdata_GlobalWheelFilter = {
    {
QT_MOC_LITERAL(0, 0, 17) // "GlobalWheelFilter"

    },
    "GlobalWheelFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalWheelFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GlobalWheelFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GlobalWheelFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalWheelFilter.data,
    qt_meta_data_GlobalWheelFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalWheelFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalWheelFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalWheelFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalWheelFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WheelHandler_t {
    QByteArrayData data[11];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WheelHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WheelHandler_t qt_meta_stringdata_WheelHandler = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WheelHandler"
QT_MOC_LITERAL(1, 13, 13), // "targetChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "blockTargetWheelChanged"
QT_MOC_LITERAL(4, 52, 28), // "scrollFlickableTargetChanged"
QT_MOC_LITERAL(5, 81, 5), // "wheel"
QT_MOC_LITERAL(6, 87, 19), // "KirigamiWheelEvent*"
QT_MOC_LITERAL(7, 107, 6), // "target"
QT_MOC_LITERAL(8, 114, 11), // "QQuickItem*"
QT_MOC_LITERAL(9, 126, 16), // "blockTargetWheel"
QT_MOC_LITERAL(10, 143, 21) // "scrollFlickableTarget"

    },
    "WheelHandler\0targetChanged\0\0"
    "blockTargetWheelChanged\0"
    "scrollFlickableTargetChanged\0wheel\0"
    "KirigamiWheelEvent*\0target\0QQuickItem*\0"
    "blockTargetWheel\0scrollFlickableTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WheelHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    5,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void WheelHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WheelHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->blockTargetWheelChanged(); break;
        case 2: _t->scrollFlickableTargetChanged(); break;
        case 3: _t->wheel((*reinterpret_cast< KirigamiWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KirigamiWheelEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::targetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::blockTargetWheelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::scrollFlickableTargetChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)(KirigamiWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WheelHandler::wheel)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->m_blockTargetWheel; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->m_scrollFlickableTarget; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1:
            if (_t->m_blockTargetWheel != *reinterpret_cast< bool*>(_v)) {
                _t->m_blockTargetWheel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->blockTargetWheelChanged();
            }
            break;
        case 2:
            if (_t->m_scrollFlickableTarget != *reinterpret_cast< bool*>(_v)) {
                _t->m_scrollFlickableTarget = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->scrollFlickableTargetChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WheelHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WheelHandler.data,
    qt_meta_data_WheelHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WheelHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WheelHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WheelHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WheelHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WheelHandler::blockTargetWheelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WheelHandler::scrollFlickableTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WheelHandler::wheel(KirigamiWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
