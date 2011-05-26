#include "quote.h"

using namespace resoup;

quote::quote(object value):object(quoteType){
	this->m_value = value;
}

quote::quote(const quote& original):object(quoteType){
	this->m_value = original.m_value;
}

object quote::value(){
	return this->m_value;
}

string quote::description(){
	return "'"+m_value.description();
}
