/****************************************************************************
** Meta object code from reading C++ file 'thememanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/thememanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thememanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThemeManager_t {
    QByteArrayData data[25];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThemeManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThemeManager_t qt_meta_stringdata_ThemeManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ThemeManager"
QT_MOC_LITERAL(1, 13, 15), // "darkModeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "accentColorChanged"
QT_MOC_LITERAL(4, 49, 15), // "fontSizeChanged"
QT_MOC_LITERAL(5, 65, 17), // "fontFamilyChanged"
QT_MOC_LITERAL(6, 83, 8), // "initData"
QT_MOC_LITERAL(7, 92, 15), // "initDBusSignals"
QT_MOC_LITERAL(8, 108, 21), // "onDBusDarkModeChanged"
QT_MOC_LITERAL(9, 130, 8), // "darkMode"
QT_MOC_LITERAL(10, 139, 24), // "onDBusAccentColorChanged"
QT_MOC_LITERAL(11, 164, 13), // "accentColorID"
QT_MOC_LITERAL(12, 178, 21), // "onDBusFontSizeChanged"
QT_MOC_LITERAL(13, 200, 23), // "onDBusFontFamilyChanged"
QT_MOC_LITERAL(14, 224, 11), // "accentColor"
QT_MOC_LITERAL(15, 236, 9), // "blueColor"
QT_MOC_LITERAL(16, 246, 8), // "redColor"
QT_MOC_LITERAL(17, 255, 10), // "greenColor"
QT_MOC_LITERAL(18, 266, 11), // "purpleColor"
QT_MOC_LITERAL(19, 278, 9), // "pinkColor"
QT_MOC_LITERAL(20, 288, 11), // "orangeColor"
QT_MOC_LITERAL(21, 300, 9), // "greyColor"
QT_MOC_LITERAL(22, 310, 16), // "devicePixelRatio"
QT_MOC_LITERAL(23, 327, 8), // "fontSize"
QT_MOC_LITERAL(24, 336, 10) // "fontFamily"

    },
    "ThemeManager\0darkModeChanged\0\0"
    "accentColorChanged\0fontSizeChanged\0"
    "fontFamilyChanged\0initData\0initDBusSignals\0"
    "onDBusDarkModeChanged\0darkMode\0"
    "onDBusAccentColorChanged\0accentColorID\0"
    "onDBusFontSizeChanged\0onDBusFontFamilyChanged\0"
    "accentColor\0blueColor\0redColor\0"
    "greenColor\0purpleColor\0pinkColor\0"
    "orangeColor\0greyColor\0devicePixelRatio\0"
    "fontSize\0fontFamily"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThemeManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      12,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495001,
      14, QMetaType::QColor, 0x00495001,
      15, QMetaType::QColor, 0x00095401,
      16, QMetaType::QColor, 0x00095401,
      17, QMetaType::QColor, 0x00095401,
      18, QMetaType::QColor, 0x00095401,
      19, QMetaType::QColor, 0x00095401,
      20, QMetaType::QColor, 0x00095401,
      21, QMetaType::QColor, 0x00095401,
      22, QMetaType::QReal, 0x00095401,
      23, QMetaType::QReal, 0x00495001,
      24, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,
       3,

       0        // eod
};

void ThemeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemeManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->darkModeChanged(); break;
        case 1: _t->accentColorChanged(); break;
        case 2: _t->fontSizeChanged(); break;
        case 3: _t->fontFamilyChanged(); break;
        case 4: _t->initData(); break;
        case 5: _t->initDBusSignals(); break;
        case 6: _t->onDBusDarkModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onDBusAccentColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onDBusFontSizeChanged(); break;
        case 9: _t->onDBusFontFamilyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::darkModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::accentColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::fontSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ThemeManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeManager::fontFamilyChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ThemeManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->darkMode(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->accentColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->blueColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->redColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->greenColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->purpleColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->pinkColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->orangeColor(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->greyColor(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->devicePixelRatio(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->fontSize(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->fontFamily(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ThemeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThemeManager.data,
    qt_meta_data_ThemeManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThemeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThemeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThemeManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThemeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ThemeManager::darkModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ThemeManager::accentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ThemeManager::fontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ThemeManager::fontFamilyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
