/****************************************************************************
** Meta object code from reading C++ file 'barchart.h'
**
** Created: Mon Mar 25 13:22:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../barchart.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barchart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BarChart[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      23,    9,    9,    9, 0x0a,
      43,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BarChart[] = {
    "BarChart\0\0setMode(int)\0setOrientation(int)\0"
    "exportChart()\0"
};

void BarChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BarChart *_t = static_cast<BarChart *>(_o);
        switch (_id) {
        case 0: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->exportChart(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BarChart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BarChart::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_BarChart,
      qt_meta_data_BarChart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BarChart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BarChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BarChart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BarChart))
        return static_cast<void*>(const_cast< BarChart*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int BarChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE