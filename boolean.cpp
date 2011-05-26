#include "boolean.h"

using namespace resoup;


boolean::boolean(bool value):object(booleanType){
	m_value = value;
}
boolean::boolean(const boolean& original):object(booleanType){
	this->m_value = original.m_value;
}
bool boolean::value(){
	return m_value;
}
string boolean::description(){
	if(m_value){
		return "#t";
	}else{
		return "#f";
	}
}
