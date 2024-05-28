// /qt/qml/ClusterTutorial/EventListSimulator.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
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
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qt_qml_ClusterTutorial_EventListSimulator_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3f,0x0,0x0,0x0,0x1,0x7,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc0,0x7,0x0,0x0,0x34,0x30,0x34,0x63,
0x33,0x61,0x66,0x64,0x66,0x39,0x30,0x37,
0x31,0x36,0x32,0x65,0x32,0x63,0x61,0x32,
0x34,0x66,0x62,0x36,0x35,0x39,0x38,0x63,
0x34,0x37,0x38,0x66,0x64,0x31,0x30,0x66,
0x31,0x39,0x66,0x65,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2c,0x91,0x5c,0x80,
0x5e,0x15,0x2c,0x2e,0x5f,0x89,0x3,0xf3,
0x53,0xfc,0x9f,0xe5,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x70,0x2,0x0,0x0,
0x2,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0xa,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
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
0x0,0x0,0x0,0x0,0xb8,0x5,0x0,0x0,
0x38,0x1,0x0,0x0,0xa8,0x1,0x0,0x0,
0x50,0x2,0x0,0x0,0x60,0x2,0x0,0x0,
0x3,0x1,0x0,0x0,0x14,0x1,0x0,0x0,
0x23,0x1,0x0,0x0,0x43,0x1,0x0,0x0,
0x54,0x1,0x0,0x0,0x34,0x1,0x0,0x0,
0x53,0x0,0x0,0x0,0x60,0x0,0x0,0x0,
0x93,0x0,0x0,0x0,0x74,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x40,0xac,0x3f,
0x5c,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0x29,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x29,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x2a,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x2b,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0xca,0x2e,0x0,0x18,
0x7,0xac,0x1,0x7,0x0,0x0,0x18,0x6,
0xd4,0x16,0x6,0x2,0x0,0x0,0x0,0x0,
0x74,0x0,0x0,0x0,0x2e,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x5,0x0,
0xff,0xff,0xff,0xff,0xf,0x0,0x0,0x0,
0x2e,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2e,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x2f,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x19,0x0,0x0,0x0,0x30,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0x31,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x2a,0x0,0x0,0x0,0x32,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0xca,0x2e,0x2,0x18,
0x7,0x2e,0x3,0x18,0xb,0x12,0x16,0x18,
0xe,0xac,0x4,0xb,0x1,0xe,0x18,0xa,
0xac,0x5,0x7,0x1,0xa,0x2e,0x6,0x3c,
0x7,0x50,0xb,0x2e,0x8,0x18,0x7,0xac,
0x9,0x7,0x0,0x0,0x18,0x6,0xd4,0x16,
0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd0,0x2,0x0,0x0,0xd8,0x2,0x0,0x0,
0xf0,0x2,0x0,0x0,0x30,0x3,0x0,0x0,
0x70,0x3,0x0,0x0,0x88,0x3,0x0,0x0,
0xa0,0x3,0x0,0x0,0xb8,0x3,0x0,0x0,
0xc8,0x3,0x0,0x0,0xe0,0x3,0x0,0x0,
0xf0,0x3,0x0,0x0,0x8,0x4,0x0,0x0,
0x28,0x4,0x0,0x0,0x68,0x4,0x0,0x0,
0x80,0x4,0x0,0x0,0xa0,0x4,0x0,0x0,
0xe0,0x4,0x0,0x0,0x8,0x5,0x0,0x0,
0x18,0x5,0x0,0x0,0x38,0x5,0x0,0x0,
0x48,0x5,0x0,0x0,0x58,0x5,0x0,0x0,
0x78,0x5,0x0,0x0,0xa8,0x5,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x53,0x0,0x74,0x0,
0x75,0x0,0x64,0x0,0x69,0x0,0x6f,0x0,
0x2e,0x0,0x45,0x0,0x76,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x53,0x0,0x69,0x0,
0x6d,0x0,0x75,0x0,0x6c,0x0,0x61,0x0,
0x74,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x53,0x0,0x74,0x0,
0x75,0x0,0x64,0x0,0x69,0x0,0x6f,0x0,
0x2e,0x0,0x45,0x0,0x76,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x53,0x0,0x79,0x0,
0x73,0x0,0x74,0x0,0x65,0x0,0x6d,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x4f,0x0,0x62,0x0,0x6a,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x73,0x0,0x69,0x0,
0x6d,0x0,0x75,0x0,0x6c,0x0,0x61,0x0,
0x74,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x61,0x0,0x63,0x0,
0x74,0x0,0x69,0x0,0x76,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x54,0x0,0x69,0x0,
0x6d,0x0,0x65,0x0,0x72,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x5f,0x0,0x5f,0x0,
0x74,0x0,0x69,0x0,0x6d,0x0,0x65,0x0,
0x72,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x74,0x0,0x69,0x0,
0x6d,0x0,0x65,0x0,0x72,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x74,0x0,0x65,0x0,0x72,0x0,0x76,0x0,
0x61,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x54,0x0,0x72,0x0,0x69,0x0,0x67,0x0,
0x67,0x0,0x65,0x0,0x72,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x54,0x0,
0x72,0x0,0x69,0x0,0x67,0x0,0x67,0x0,
0x65,0x0,0x72,0x0,0x65,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x43,0x0,0x6f,0x0,
0x6d,0x0,0x70,0x0,0x6f,0x0,0x6e,0x0,
0x65,0x0,0x6e,0x0,0x74,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6f,0x0,0x6d,0x0,0x70,0x0,
0x6c,0x0,0x65,0x0,0x74,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6f,0x0,0x6d,0x0,0x70,0x0,0x6c,0x0,
0x65,0x0,0x74,0x0,0x65,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x45,0x0,0x76,0x0,
0x65,0x0,0x6e,0x0,0x74,0x0,0x53,0x0,
0x69,0x0,0x6d,0x0,0x75,0x0,0x6c,0x0,
0x61,0x0,0x74,0x0,0x6f,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x73,0x0,0x68,0x0,
0x6f,0x0,0x77,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x45,0x0,0x76,0x0,
0x65,0x0,0x6e,0x0,0x74,0x0,0x53,0x0,
0x79,0x0,0x73,0x0,0x74,0x0,0x65,0x0,
0x6d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x69,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x73,0x0,0x6f,0x0,0x6c,0x0,0x76,0x0,
0x65,0x0,0x64,0x0,0x55,0x0,0x72,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x45,0x0,0x76,0x0,
0x65,0x0,0x6e,0x0,0x74,0x0,0x4c,0x0,
0x69,0x0,0x73,0x0,0x74,0x0,0x4d,0x0,
0x6f,0x0,0x64,0x0,0x65,0x0,0x6c,0x0,
0x2e,0x0,0x71,0x0,0x6d,0x0,0x6c,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x61,0x0,0x72,0x0,0x74,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1f,0x0,0x10,0x0,0x0,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x0,0x10,0x0,
0x0,0x1,0x0,0x0,0x58,0x0,0x0,0x0,
0x10,0x1,0x0,0x0,0x98,0x1,0x0,0x0,
0x4,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x22,0x0,0x10,0x0,
0x23,0x0,0x50,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6,0x0,0x0,0x0,
0x3,0x0,0x0,0x20,0x24,0x0,0x50,0x0,
0x8,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x26,0x0,0x50,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x26,0x0,0x40,0x1,
0x26,0x0,0xd0,0x1,0x6,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x24,0x0,0x30,0x1,
0x24,0x0,0xb0,0x1,0xd,0x0,0x0,0x0,
0x0,0x0,0x9,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2e,0x0,0x50,0x0,
0x2e,0x0,0xf0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x26,0x0,0xd0,0x1,
0x27,0x0,0x90,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x29,0x0,0x90,0x0,
0x29,0x0,0x60,0x1,0xa,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x28,0x0,0x90,0x0,
0x28,0x0,0x30,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x2e,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2e,0x0,0xf0,0x0,
0x2e,0x0,0xc0,0x1,0x0,0x0,0x0,0x0
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
{ 0, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for onTriggered at line 41, column 9
QObject *r7_0;
QObject *r2_0;
// generate_CreateCallContext
{
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
while (!aotContext->loadSingletonLookup(0, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
aotContext->initLoadSingletonLookup(0, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_StoreReg
r7_0 = r2_0;
{
}
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
while (!aotContext->callObjectPropertyLookup(1, r7_0, args, types, 0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
aotContext->initCallObjectPropertyLookup(1);
if (aotContext->engine->hasError())
    return ;
}
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
