#include <java/sql/DataTruncation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/sql/SQLWarning.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLWarning = ::java::sql::SQLWarning;

namespace java {
	namespace sql {

$FieldInfo _DataTruncation_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(DataTruncation, index)},
	{"parameter", "Z", nullptr, $PRIVATE, $field(DataTruncation, parameter)},
	{"read", "Z", nullptr, $PRIVATE, $field(DataTruncation, read)},
	{"dataSize", "I", nullptr, $PRIVATE, $field(DataTruncation, dataSize)},
	{"transferSize", "I", nullptr, $PRIVATE, $field(DataTruncation, transferSize)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataTruncation, serialVersionUID)},
	{}
};

$MethodInfo _DataTruncation_MethodInfo_[] = {
	{"<init>", "(IZZII)V", nullptr, $PUBLIC, $method(static_cast<void(DataTruncation::*)(int32_t,bool,bool,int32_t,int32_t)>(&DataTruncation::init$))},
	{"<init>", "(IZZIILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTruncation::*)(int32_t,bool,bool,int32_t,int32_t,$Throwable*)>(&DataTruncation::init$))},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getParameter", "()Z", nullptr, $PUBLIC},
	{"getRead", "()Z", nullptr, $PUBLIC},
	{"getTransferSize", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataTruncation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.DataTruncation",
	"java.sql.SQLWarning",
	nullptr,
	_DataTruncation_FieldInfo_,
	_DataTruncation_MethodInfo_
};

$Object* allocate$DataTruncation($Class* clazz) {
	return $of($alloc(DataTruncation));
}

void DataTruncation::init$(int32_t index, bool parameter, bool read, int32_t dataSize, int32_t transferSize) {
	$SQLWarning::init$("Data truncation"_s, read == true ? "01004"_s : "22001"_s);
	this->index = index;
	this->parameter = parameter;
	this->read = read;
	this->dataSize = dataSize;
	this->transferSize = transferSize;
}

void DataTruncation::init$(int32_t index, bool parameter, bool read, int32_t dataSize, int32_t transferSize, $Throwable* cause) {
	$SQLWarning::init$("Data truncation"_s, read == true ? "01004"_s : "22001"_s, cause);
	this->index = index;
	this->parameter = parameter;
	this->read = read;
	this->dataSize = dataSize;
	this->transferSize = transferSize;
}

int32_t DataTruncation::getIndex() {
	return this->index;
}

bool DataTruncation::getParameter() {
	return this->parameter;
}

bool DataTruncation::getRead() {
	return this->read;
}

int32_t DataTruncation::getDataSize() {
	return this->dataSize;
}

int32_t DataTruncation::getTransferSize() {
	return this->transferSize;
}

DataTruncation::DataTruncation() {
}

DataTruncation::DataTruncation(const DataTruncation& e) {
}

DataTruncation DataTruncation::wrapper$() {
	$pendingException(this);
	return *this;
}

void DataTruncation::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DataTruncation::load$($String* name, bool initialize) {
	$loadClass(DataTruncation, name, initialize, &_DataTruncation_ClassInfo_, allocate$DataTruncation);
	return class$;
}

$Class* DataTruncation::class$ = nullptr;

	} // sql
} // java