#include "number.h"
#include <sstream>

using namespace resoup;
number::number(double m_value):object(numberType){
	this->m_value = m_value;
}

number::number(const number& original):object(numberType){
	this->m_value = m_value;
}

string number::description(){
	std::stringstream oss;
	double v = this->m_value;
	if(v == (int)v){
		oss<<(int)v;
	}else{
		oss<<v;
	}
	return oss.str();
}

double number::value(){
	return m_value;
}

number number::operator +(const number& operand){
	return number(this->m_value + operand.m_value);
}
number number::operator -(const number& operand){
	return number(this->m_value + operand.m_value);
}
number number::operator *(const number& operand){
	return number(this->m_value + operand.m_value);
}
number number::operator /(const number& operand){
	return number(this->m_value + operand.m_value);
}
bool number::operator >(const number& operand){
	return this->m_value > operand.m_value;
}
bool number::operator >=(const number& operand){
	return this->m_value >= operand.m_value;
}
bool number::operator <(const number& operand){
	return this->m_value < operand.m_value;
}
bool number::operator <=(const number& operand){
	return this->m_value <= operand.m_value;
}
bool number::operator ==(const number& operand){
	return this->m_value == operand.m_value;
}
number number::operator +(double operand){
	return number(this->m_value + operand);
}
number number::operator -(double operand){
	return number(this->m_value - operand);
}
number number::operator *(double operand){
	return number(this->m_value * operand);
}
number number::operator /(double operand){
	return number(this->m_value / operand);
}
bool number::operator >(double operand){
	return this->m_value > operand;
}
bool number::operator >=(double operand){
	return this->m_value >= operand;
}
bool number::operator <(double operand){
	return this->m_value < operand;
}
bool number::operator <=(double operand){
	return this->m_value <= operand;
}
bool number::operator ==(double operand){
	return this->m_value == operand;
}
number number::operator +(int operand){
	return number(this->m_value + operand);
}
number number::operator -(int operand){
	return number(this->m_value - operand);
}
number number::operator *(int operand){
	return number(this->m_value * operand);
}
number number::operator /(int operand){
	return number(this->m_value / operand);
}
bool number::operator >(int operand){
	return this->m_value > operand;
}
bool number::operator >=(int operand){
	return this->m_value >= operand;
}
bool number::operator <(int operand){
	return this->m_value < operand;
}
bool number::operator <=(int operand){
	return this->m_value <= operand;
}
bool number::operator ==(int operand){
	return this->m_value == operand;
}
