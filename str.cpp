#include "str.h"

using namespace resoup;

str::str(string value):object(stringType){
	m_value = value;
}

str::str(const str& original):object(stringType){
	m_value = original.m_value;
}

string str::value(){
	return m_value;
}

string str::description(){
	return this->value();
}
