#include "list.h"

using namespace resoup;
list::list():object(listType){
	this->m_size = 0;
	this->m_elements = new object*[m_size];
}

list::list(const list &original):object(listType){
	this->m_size = original.m_size;
	this->m_elements = new object*[m_size];
	for(int i = 0; i < m_size; i++){
		m_elements[i] = original.m_elements[i];
	}
}

list::~list(){
	if (m_size) {
		delete[] this->m_elements;
	}

}

void list::add(object& item){
	object **tmp = m_elements;
	m_elements = new object*[++m_size];
	for (unsigned int i = 0; i < m_size - 1; i++) {
		m_elements[i] = tmp[i];
	}
	delete[] tmp;
	m_elements[m_size - 1] = &item;
}

object list::get(int idx){
	return *m_elements[idx];
}

int list::size(){
	return this->m_size;
}

string list::description(){
	string desc("(");
	for(int i = 0; i < m_size-1; i++){
		if(m_elements[i]->type() == stringType){
			desc += "\""+m_elements[i]->description()+"\" ";
		}else{
			desc += m_elements[i]->description() + " ";
		}
	}
	desc += m_elements[m_size-1]->description() + ")";
	return desc;
}

