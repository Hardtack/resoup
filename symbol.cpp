#include "symbol.h"

using namespace resoup;

symbol::symbol(string name):object(symbolType){
	this->m_name = name;
}

symbol::symbol(const symbol& original):object(symbolType){
	this->m_name = original.m_name;
}

string symbol::name(){
	return m_name;
}

string symbol::description(){
	return this->name();
}
