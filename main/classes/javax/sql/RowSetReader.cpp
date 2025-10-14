#include <javax/sql/RowSetReader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sql/RowSetInternal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetInternal = ::javax::sql::RowSetInternal;

namespace javax {
	namespace sql {

$MethodInfo _RowSetReader_MethodInfo_[] = {
	{"readData", "(Ljavax/sql/RowSetInternal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSetReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetReader",
	nullptr,
	nullptr,
	nullptr,
	_RowSetReader_MethodInfo_
};

$Object* allocate$RowSetReader($Class* clazz) {
	return $of($alloc(RowSetReader));
}

$Class* RowSetReader::load$($String* name, bool initialize) {
	$loadClass(RowSetReader, name, initialize, &_RowSetReader_ClassInfo_, allocate$RowSetReader);
	return class$;
}

$Class* RowSetReader::class$ = nullptr;

	} // sql
} // javax