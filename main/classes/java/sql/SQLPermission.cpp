#include <java/sql/SQLPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace sql {

$FieldInfo _SQLPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SQLPermission, serialVersionUID)},
	{}
};

$MethodInfo _SQLPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLPermission::*)($String*)>(&SQLPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SQLPermission::*)($String*,$String*)>(&SQLPermission::init$))},
	{}
};

$ClassInfo _SQLPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.sql.SQLPermission",
	"java.security.BasicPermission",
	nullptr,
	_SQLPermission_FieldInfo_,
	_SQLPermission_MethodInfo_
};

$Object* allocate$SQLPermission($Class* clazz) {
	return $of($alloc(SQLPermission));
}

void SQLPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SQLPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SQLPermission::SQLPermission() {
}

$Class* SQLPermission::load$($String* name, bool initialize) {
	$loadClass(SQLPermission, name, initialize, &_SQLPermission_ClassInfo_, allocate$SQLPermission);
	return class$;
}

$Class* SQLPermission::class$ = nullptr;

	} // sql
} // java