#include <javax/sql/StatementEventListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sql/StatementEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $StatementEvent = ::javax::sql::StatementEvent;

namespace javax {
	namespace sql {

$MethodInfo _StatementEventListener_MethodInfo_[] = {
	{"statementClosed", "(Ljavax/sql/StatementEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"statementErrorOccurred", "(Ljavax/sql/StatementEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StatementEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.StatementEventListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_StatementEventListener_MethodInfo_
};

$Object* allocate$StatementEventListener($Class* clazz) {
	return $of($alloc(StatementEventListener));
}

$Class* StatementEventListener::load$($String* name, bool initialize) {
	$loadClass(StatementEventListener, name, initialize, &_StatementEventListener_ClassInfo_, allocate$StatementEventListener);
	return class$;
}

$Class* StatementEventListener::class$ = nullptr;

	} // sql
} // javax