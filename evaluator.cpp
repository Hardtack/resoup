#include "evaluator.h"
#include "procedure.h"
#include "list.h"
#include "nil.h"

using namespace resoup;

object resoup::evaluate(object obj, environment& env){
	lisp_type t = obj.type();
	switch(t){
		case listType:
			{
				list& li = (list&)obj;
				if(li.size() == 0){
					return nil();
				}
				object first = evaluate(li.get(0),env);
				if(first.type() != procedureType && first.type() != macroType){
					//TODO: throw exception
					return nil();
				}
				switch(first.type()){
					case procedureType:
						{
							arg_list args;
							for (int i = 1; i < li.size(); i++){
							object arg = evaluate(li.get(i),env);
								args.push_back(arg);
							}
							return apply((procedure&)first,args,env);
						}break;
					case macroType:
						{
							//TODO: Call Macro
							return nil();
						}break;
					default:
						{
							// Do nothing
							return nil();
						}break;
				}
			}
			break;
		case symbolType:
			{
				return env.find((symbol&)obj);	
			}break;
		default:
			{
				return obj;
			}break;
	};
}

object resoup::apply(procedure func, arg_list args, environment& env){
	environment new_env(env);
	return func.call(args, new_env);
}
