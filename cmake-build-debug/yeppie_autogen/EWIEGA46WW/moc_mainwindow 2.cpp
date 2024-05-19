/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "pickInputFile",
    "",
    "pickOutputDirectory",
    "onOkButtonClicked",
    "printInputsAndQuit",
    "showLoadingAnimation",
    "closeLoadingAnimation",
    "getInputFilePath",
    "std::string",
    "getOutputFileName",
    "getOutputDirPath",
    "getFloatInput1",
    "getFloatInput2",
    "runMainPort"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    1 /* Public */,
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    0,   90,    2, 0x0a,    5 /* Public */,
       7,    0,   91,    2, 0x0a,    6 /* Public */,
       8,    0,   92,    2, 0x0a,    7 /* Public */,
      10,    0,   93,    2, 0x0a,    8 /* Public */,
      11,    0,   94,    2, 0x0a,    9 /* Public */,
      12,    0,   95,    2, 0x0a,   10 /* Public */,
      13,    0,   96,    2, 0x0a,   11 /* Public */,
      14,    0,   97,    2, 0x0a,   12 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'pickInputFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pickOutputDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOkButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'printInputsAndQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showLoadingAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeLoadingAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getInputFilePath'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getOutputFileName'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getOutputDirPath'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getFloatInput1'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'getFloatInput2'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        // method 'runMainPort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pickInputFile(); break;
        case 1: _t->pickOutputDirectory(); break;
        case 2: _t->onOkButtonClicked(); break;
        case 3: _t->printInputsAndQuit(); break;
        case 4: _t->showLoadingAnimation(); break;
        case 5: _t->closeLoadingAnimation(); break;
        case 6: { std::string _r = _t->getInputFilePath();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 7: { std::string _r = _t->getOutputFileName();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 8: { std::string _r = _t->getOutputDirPath();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 9: { std::string _r = _t->getFloatInput1();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 10: { std::string _r = _t->getFloatInput2();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->runMainPort(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
