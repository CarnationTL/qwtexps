/****************************************************************************
** Meta object code from reading C++ file 'tvplot.h'
**
** Created: Mon Mar 25 13:23:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tvplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tvplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TVPlot[] = {

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
       8,    7,    7,    7, 0x0a,
      21,    7,    7,    7, 0x0a,
      38,   34,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TVPlot[] = {
    "TVPlot\0\0setMode(int)\0exportPlot()\0,on\0"
    "showItem(QVariant,bool)\0"
};

void TVPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TVPlot *_t = static_cast<TVPlot *>(_o);
        switch (_id) {
        case 0: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->exportPlot(); break;
        case 2: _t->showItem((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TVPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TVPlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_TVPlot,
      qt_meta_data_TVPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TVPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TVPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TVPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TVPlot))
        return static_cast<void*>(const_cast< TVPlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int TVPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
