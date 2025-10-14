#include <javax/sql/ConnectionEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/sql/SQLException.h>
#include <java/util/EventObject.h>
#include <javax/sql/PooledConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;
using $EventObject = ::java::util::EventObject;
using $PooledConnection = ::javax::sql::PooledConnection;

namespace javax {
	namespace sql {

$FieldInfo _ConnectionEvent_FieldInfo_[] = {
	{"ex", "Ljava/sql/SQLException;", nullptr, $PRIVATE, $field(ConnectionEvent, ex)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ConnectionEvent, serialVersionUID)},
	{}
};

$MethodInfo _ConnectionEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/sql/PooledConnection;)V", nullptr, $PUBLIC, $method(static_cast<void(ConnectionEvent::*)($PooledConnection*)>(&ConnectionEvent::init$))},
	{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V", nullptr, $PUBLIC, $method(static_cast<void(ConnectionEvent::*)($PooledConnection*,$SQLException*)>(&ConnectionEvent::init$))},
	{"getSQLException", "()Ljava/sql/SQLException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConnectionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sql.ConnectionEvent",
	"java.util.EventObject",
	nullptr,
	_ConnectionEvent_FieldInfo_,
	_ConnectionEvent_MethodInfo_
};

$Object* allocate$ConnectionEvent($Class* clazz) {
	return $of($alloc(ConnectionEvent));
}

void ConnectionEvent::init$($PooledConnection* con) {
	$EventObject::init$(con);
	$set(this, ex, nullptr);
}

void ConnectionEvent::init$($PooledConnection* con, $SQLException* ex) {
	$EventObject::init$(con);
	$set(this, ex, nullptr);
	$set(this, ex, ex);
}

$SQLException* ConnectionEvent::getSQLException() {
	return this->ex;
}

ConnectionEvent::ConnectionEvent() {
}

$Class* ConnectionEvent::load$($String* name, bool initialize) {
	$loadClass(ConnectionEvent, name, initialize, &_ConnectionEvent_ClassInfo_, allocate$ConnectionEvent);
	return class$;
}

$Class* ConnectionEvent::class$ = nullptr;

	} // sql
} // javax