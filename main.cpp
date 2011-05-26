#include <iostream>
#include "symbol.h"
#include "list.h"
#include "evaluator.h"
#include "number.h"
#include "builtin_procedure.h"
#include "environment.h"
#include <sstream>

using namespace resoup;
using std::cout;
using std::cin;
using std::endl;
int main(int argc, char* argv[]){
	list li = list();
	environment env(NULL);
	plus_procedure p(env);
	li.add(p);
	number a(3);
	li.add(a);
	number b(5);
	li.add(b);
	cout<<li.description()<<endl;
	cout<<evaluate(li,env).description()<<endl;
}

