#include "Object.h"

using namespace resoup;
lisp_type object::type(){
	return this->m_type;
};

string object::description(){
	return string("<object>");
}
object::object(lisp_type type){
	this->m_type = type;
}
object::object(){
}

