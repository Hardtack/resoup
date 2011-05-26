#include "environment.h"

using namespace resoup;

object environment::find(symbol s){
	return object();
}

void environment::define(symbol s, object obj){
	//TODO: define
}

environment::environment(const environment& env){
	m_parent =  env.m_parent;
}
environment::environment(environment* env){
	m_parent = env;
}
