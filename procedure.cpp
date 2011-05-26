#include "procedure.h"
#include "evaluator.h"
#include "nil.h"
#include <sstream>

using namespace resoup;
procedure::procedure(environment& env):m_parent_env(env){
}

procedure::procedure(object body, symbol_list argSymbols, environment parent_env):m_parent_env(parent_env){
	this->m_body = body;
	this->m_argSymbols = argSymbols;
	this->m_name = "";
}
procedure::procedure(const procedure& original):m_parent_env(original.m_parent_env){
	this->m_body = original.m_body;
	this->m_argSymbols = original.m_argSymbols;
	this->m_name = original.m_name;
}

environment& procedure::parent_env(){
	return m_parent_env;
}

object procedure::call(arg_list args, environment& env){
	if(args.size() != m_argSymbols.size()){
		//TODO: throw exception
		return nil();
	}
	symbol_list::iterator symbol_itor;
	arg_list::iterator arg_itor;
	for(symbol_itor = m_argSymbols.begin(),arg_itor=args.begin();
			symbol_itor != m_argSymbols.end() && arg_itor != args.end();
			arg_itor++,symbol_itor++){
		env.define(*symbol_itor,*arg_itor);
	}
	return evaluate(m_body, env);
}

string procedure::description(){
	if(this->name().length() == 0){
		return "<procedure>";
	}
	return this->name();
}

string procedure::name(){
	return m_name;
}
