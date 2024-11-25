/****************************************************************************
** Meta object code from reading C++ file 'tests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../tests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tests_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tests_t qt_meta_stringdata_tests = {
    {
QT_MOC_LITERAL(0, 0, 5), // "tests"
QT_MOC_LITERAL(1, 6, 12), // "testAddition"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "testSubtraction"
QT_MOC_LITERAL(4, 36, 18), // "testMultiplication"
QT_MOC_LITERAL(5, 55, 12), // "testDivision"
QT_MOC_LITERAL(6, 68, 14), // "testPercentage"
QT_MOC_LITERAL(7, 83, 9), // "testPower"
QT_MOC_LITERAL(8, 93, 13), // "testLogarithm"
QT_MOC_LITERAL(9, 107, 13) // "testFactorial"

    },
    "tests\0testAddition\0\0testSubtraction\0"
    "testMultiplication\0testDivision\0"
    "testPercentage\0testPower\0testLogarithm\0"
    "testFactorial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tests[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tests *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testAddition(); break;
        case 1: _t->testSubtraction(); break;
        case 2: _t->testMultiplication(); break;
        case 3: _t->testDivision(); break;
        case 4: _t->testPercentage(); break;
        case 5: _t->testPower(); break;
        case 6: _t->testLogarithm(); break;
        case 7: _t->testFactorial(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject tests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_tests.data,
    qt_meta_data_tests,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tests.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
