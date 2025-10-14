#include <javax/sql/RowSetInternal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/sql/Connection.h>
#include <java/sql/ResultSet.h>
#include <javax/sql/RowSetMetaData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ResultSet = ::java::sql::ResultSet;
using $RowSetMetaData = ::javax::sql::RowSetMetaData;

namespace javax {
	namespace sql {

$MethodInfo _RowSetInternal_MethodInfo_[] = {
	{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getOriginal", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getOriginalRow", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParams", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setMetaData", "(Ljavax/sql/RowSetMetaData;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSetInternal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetInternal",
	nullptr,
	nullptr,
	nullptr,
	_RowSetInternal_MethodInfo_
};

$Object* allocate$RowSetInternal($Class* clazz) {
	return $of($alloc(RowSetInternal));
}

$Class* RowSetInternal::load$($String* name, bool initialize) {
	$loadClass(RowSetInternal, name, initialize, &_RowSetInternal_ClassInfo_, allocate$RowSetInternal);
	return class$;
}

$Class* RowSetInternal::class$ = nullptr;

	} // sql
} // javax