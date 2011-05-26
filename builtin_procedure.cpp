#include "builtin_procedure.h"
#include "number.h"
#include "boolean.h"
#include "nil.h"

using namespace resoup;

object plus_procedure::call(arg_list args, environment& env){
	if(args.size() <= 1){
		return (number&)*(args.begin());
	}
	arg_list::iterator arg_itor;
	number result = 0;
	for(arg_itor = args.begin(); arg_itor != args.end(); arg_itor++){
		result = result + (number&)*arg_itor;
	}
	return result;
}

object multiply_procedure::call(arg_list args, environment& env){
	arg_list::iterator arg_itor;
	number result = 1;
	for(arg_itor = args.begin(); arg_itor != args.end(); arg_itor++){
		result = result * (number&)*arg_itor;
	}
	return result;
}

object minus_procedure::call(arg_list args, environment& env){
	if(args.size() <= 1){
		return number(0)-(number&)*(args.begin());
	}
	arg_list::iterator arg_itor = args.begin();
	number result = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		result = result - (number&)*arg_itor;
	}
	return result;
}

object divide_procedure::call(arg_list args, environment& env){
	if(args.size() <= 1){
		return number(1) / (number&)*args.begin();
	}
	arg_list::iterator arg_itor = args.begin();
	number result = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		result = result / (number&)*arg_itor;
	}
	return result;
}

object equal_procedure::call(arg_list args, environment& env){
	if(args.size() <= 2){
		//TODO: throw exception
		return nil();
	}
	bool result = true;
	arg_list::iterator arg_itor = args.begin();
	number& last = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		if(last == (number&)*arg_itor){
			continue;
		}
		result = false;
		break;
	}
	return boolean(result);
}
object gt_procedure::call(arg_list args, environment& env){
	if(args.size() <= 2){
		//TODO: throw exception
		return nil();
	}
	bool result = true;
	arg_list::iterator arg_itor = args.begin();
	number& last = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		if(last > (number&)*arg_itor){
			continue;
		}
		result = false;
		break;
	}
	return boolean(result);
}
object lt_procedure::call(arg_list args, environment& env){
	if(args.size() <= 2){
		//TODO: throw exception
		return nil();
	}
	bool result = true;
	arg_list::iterator arg_itor = args.begin();
	number& last = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		if(last < (number&)*arg_itor){
			continue;
		}
		result = false;
		break;
	}
	return boolean(result);
}
object ge_procedure::call(arg_list args, environment& env){
	if(args.size() <= 2){
		//TODO: throw exception
		return nil();
	}
	bool result = true;
	arg_list::iterator arg_itor = args.begin();
	number& last = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		if(last >= (number&)*arg_itor){
			continue;
		}
		result = false;
		break;
	}
	return boolean(result);
}
object le_procedure::call(arg_list args, environment& env){
	if(args.size() <= 2){
		//TODO: throw exception
		return nil();
	}
	bool result = true;
	arg_list::iterator arg_itor = args.begin();
	number& last = (number&)*arg_itor;
	arg_itor++;
	for(; arg_itor != args.end(); arg_itor++){
		if(last <= (number&)*arg_itor){
			continue;
		}
		result = false;
		break;
	}
	return boolean(result);
}
