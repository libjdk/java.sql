#ifndef _java_sql_SQLTransientException_h_
#define _java_sql_SQLTransientException_h_
//$ class java.sql.SQLTransientException
//$ extends java.sql.SQLException

#include <java/sql/SQLException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace sql {

class $import SQLTransientException : public ::java::sql::SQLException {
	$class(SQLTransientException, $NO_CLASS_INIT, ::java::sql::SQLException)
public:
	SQLTransientException();
	void init$();
	void init$($String* reason);
	void init$($String* reason, $String* SQLState);
	void init$($String* reason, $String* SQLState, int32_t vendorCode);
	void init$($Throwable* cause);
	void init$($String* reason, $Throwable* cause);
	void init$($String* reason, $String* SQLState, $Throwable* cause);
	void init$($String* reason, $String* SQLState, int32_t vendorCode, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x8281C15B73527E15;
	SQLTransientException(const SQLTransientException& e);
	SQLTransientException wrapper$();
	virtual void throwWrapper$() override;
};

	} // sql
} // java

#endif // _java_sql_SQLTransientException_h_