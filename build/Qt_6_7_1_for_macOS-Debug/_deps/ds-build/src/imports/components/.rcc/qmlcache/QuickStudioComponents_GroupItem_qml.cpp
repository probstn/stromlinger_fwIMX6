// /QtQuick/Studio/Components/GroupItem.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qalgorithms.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qrandom.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <cmath>
#include <limits>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _0x5f_QtQuick_Studio_Components_GroupItem_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3f,0x0,0x0,0x0,0x1,0x7,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x4,0x0,0x0,0x34,0x30,0x34,0x63,
0x33,0x61,0x66,0x64,0x66,0x39,0x30,0x37,
0x31,0x36,0x32,0x65,0x32,0x63,0x61,0x32,
0x34,0x66,0x62,0x36,0x35,0x39,0x38,0x63,
0x34,0x37,0x38,0x66,0x64,0x31,0x30,0x66,
0x31,0x39,0x66,0x65,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x69,0x69,0x34,0xdc,
0xcc,0x37,0xc5,0x2f,0x9e,0xd9,0xed,0x8e,
0x88,0x45,0x86,0xfa,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x8,0x2,0x0,0x0,
0x2,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x30,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x30,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x38,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb0,0x3,0x0,0x0,
0x38,0x1,0x0,0x0,0xa0,0x1,0x0,0x0,
0x73,0x0,0x0,0x0,0x93,0x0,0x0,0x0,
0xa0,0x0,0x0,0x0,0x93,0x0,0x0,0x0,
0xb0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x73,0x0,0x0,0x0,0x93,0x0,0x0,0x0,
0xc0,0x0,0x0,0x0,0x93,0x0,0x0,0x0,
0xd0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0xc0,0x3,0x0,
0x44,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xd,0x0,0x0,0x0,
0x4b,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4b,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x18,0x7,
0x14,0x0,0xa,0x2e,0x1,0x3c,0x2,0x18,
0xc,0x2e,0x3,0x3c,0x4,0x80,0xc,0x18,
0xb,0xac,0x5,0x7,0x2,0xa,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xd,0x0,0x0,0x0,
0x4c,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x6,0x18,0x7,
0x14,0x0,0xa,0x2e,0x7,0x3c,0x8,0x18,
0xc,0x2e,0x9,0x3c,0xa,0x80,0xc,0x18,
0xb,0xac,0xb,0x7,0x2,0xa,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x2,0x0,0x0,0x48,0x2,0x0,0x0,
0x60,0x2,0x0,0x0,0x70,0x2,0x0,0x0,
0x90,0x2,0x0,0x0,0xd0,0x2,0x0,0x0,
0xf8,0x2,0x0,0x0,0x38,0x3,0x0,0x0,
0x48,0x3,0x0,0x0,0x58,0x3,0x0,0x0,
0x78,0x3,0x0,0x0,0x88,0x3,0x0,0x0,
0x90,0x3,0x0,0x0,0xa8,0x3,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x49,0x0,0x74,0x0,
0x65,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x69,0x0,0x6d,0x0,
0x70,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x69,0x0,0x74,0x0,0x57,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x1c,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x69,0x0,0x6d,0x0,0x70,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x69,0x0,
0x74,0x0,0x57,0x0,0x69,0x0,0x64,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x69,0x0,0x6d,0x0,
0x70,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x69,0x0,0x74,0x0,0x48,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x69,0x0,0x6d,0x0,0x70,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x69,0x0,
0x74,0x0,0x48,0x0,0x65,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x4d,0x0,0x61,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x6d,0x0,0x61,0x0,
0x78,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x63,0x0,0x68,0x0,
0x69,0x0,0x6c,0x0,0x64,0x0,0x72,0x0,
0x65,0x0,0x6e,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x78,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x79,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x10,0x0,
0x0,0x2,0x0,0x0,0x28,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x4a,0x0,0x10,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4c,0x0,0x50,0x0,
0x4c,0x0,0x50,0x1,0x3,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4b,0x0,0x50,0x0,
0x4b,0x0,0x40,0x1,0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           *static_cast<return_type *>(dataPtr) = binding(aotContext, argumentsPtr);
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for implicitWidth at line 75, column 5
QVariant r2_0;
double r12_0;
double r2_4;
double r11_0;
QVariant r2_2;
double r2_1;
double r2_3;
double r10_0;
{
}
{
}
// generate_MoveConst
r10_0 = double(16);
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(9);
#endif
r2_0 = QVariant(aotContext->lookupResultMetaType(1));
while (!aotContext->loadScopeObjectPropertyLookup(1, r2_0.data())) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(9);
#endif
aotContext->initLoadScopeObjectPropertyLookup(1, r2_0.metaType());
if (aotContext->engine->hasError())
    return double();
r2_0 = QVariant(aotContext->lookupResultMetaType(1));
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
while (!aotContext->getValueLookup(2, r2_0.data(), &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
aotContext->initGetValueLookup(2, []() { static const auto t = QMetaType::fromName("QQmlRectFValueType"); return t; }().metaObject(), QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_StoreReg
r12_0 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(15);
#endif
r2_2 = QVariant(aotContext->lookupResultMetaType(3));
while (!aotContext->loadScopeObjectPropertyLookup(3, r2_2.data())) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(15);
#endif
aotContext->initLoadScopeObjectPropertyLookup(3, r2_2.metaType());
if (aotContext->engine->hasError())
    return double();
r2_2 = QVariant(aotContext->lookupResultMetaType(3));
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(17);
#endif
while (!aotContext->getValueLookup(4, r2_2.data(), &r2_3)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(17);
#endif
aotContext->initGetValueLookup(4, []() { static const auto t = QMetaType::fromName("QQmlRectFValueType"); return t; }().metaObject(), QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_Add
r2_4 = (r12_0 + r2_3);
{
}
// generate_StoreReg
r11_0 = r2_4;
{
}
// generate_CallPropertyLookup
{
const double arg1 = r10_0;
const double arg2 = r11_0;
r2_4 = [&]() { 
auto  tmpMax = (qIsNull(arg2) && qIsNull(arg1) && std::copysign(1.0, arg2) == 1) ? arg2 : ((arg2 > arg1 || std::isnan(arg2)) ? arg2 : arg1);
return tmpMax;
}();
}
{
}
{
}
// generate_Ret
return r2_4;
});}
 },{ 1, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for implicitHeight at line 76, column 5
double r12_0;
double r2_4;
double r11_0;
QVariant r2_0;
double r2_1;
QVariant r2_2;
double r2_3;
double r10_0;
{
}
{
}
// generate_MoveConst
r10_0 = double(16);
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(9);
#endif
r2_0 = QVariant(aotContext->lookupResultMetaType(7));
while (!aotContext->loadScopeObjectPropertyLookup(7, r2_0.data())) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(9);
#endif
aotContext->initLoadScopeObjectPropertyLookup(7, r2_0.metaType());
if (aotContext->engine->hasError())
    return double();
r2_0 = QVariant(aotContext->lookupResultMetaType(7));
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
while (!aotContext->getValueLookup(8, r2_0.data(), &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(11);
#endif
aotContext->initGetValueLookup(8, []() { static const auto t = QMetaType::fromName("QQmlRectFValueType"); return t; }().metaObject(), QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_StoreReg
r12_0 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(15);
#endif
r2_2 = QVariant(aotContext->lookupResultMetaType(9));
while (!aotContext->loadScopeObjectPropertyLookup(9, r2_2.data())) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(15);
#endif
aotContext->initLoadScopeObjectPropertyLookup(9, r2_2.metaType());
if (aotContext->engine->hasError())
    return double();
r2_2 = QVariant(aotContext->lookupResultMetaType(9));
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(17);
#endif
while (!aotContext->getValueLookup(10, r2_2.data(), &r2_3)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(17);
#endif
aotContext->initGetValueLookup(10, []() { static const auto t = QMetaType::fromName("QQmlRectFValueType"); return t; }().metaObject(), QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_Add
r2_4 = (r12_0 + r2_3);
{
}
// generate_StoreReg
r11_0 = r2_4;
{
}
// generate_CallPropertyLookup
{
const double arg1 = r10_0;
const double arg2 = r11_0;
r2_4 = [&]() { 
auto  tmpMax = (qIsNull(arg2) && qIsNull(arg1) && std::copysign(1.0, arg2) == 1) ? arg2 : ((arg2 > arg1 || std::isnan(arg2)) ? arg2 : arg1);
return tmpMax;
}();
}
{
}
{
}
// generate_Ret
return r2_4;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
