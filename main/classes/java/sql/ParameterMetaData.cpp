#include <java/sql/ParameterMetaData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Wrapper = ::java::sql::Wrapper;

namespace java {
	namespace sql {

$FieldInfo _ParameterMetaData_FieldInfo_[] = {
	{"parameterNoNulls", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNoNulls)},
	{"parameterNullable", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNullable)},
	{"parameterNullableUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNullableUnknown)},
	{"parameterModeUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeUnknown)},
	{"parameterModeIn", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeIn)},
	{"parameterModeInOut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeInOut)},
	{"parameterModeOut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeOut)},
	{}
};

$MethodInfo _ParameterMetaData_MethodInfo_[] = {
	{"getParameterClassName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParameterMode", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParameterType", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParameterTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getPrecision", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getScale", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isNullable", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isSigned", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _ParameterMetaData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ParameterMetaData",
	nullptr,
	"java.sql.Wrapper",
	_ParameterMetaData_FieldInfo_,
	_ParameterMetaData_MethodInfo_
};

$Object* allocate$ParameterMetaData($Class* clazz) {
	return $of($alloc(ParameterMetaData));
}

$Class* ParameterMetaData::load$($String* name, bool initialize) {
	$loadClass(ParameterMetaData, name, initialize, &_ParameterMetaData_ClassInfo_, allocate$ParameterMetaData);
	return class$;
}

$Class* ParameterMetaData::class$ = nullptr;

	} // sql
} // java