#ifndef _EVALUATOR_H_
#define _EVALUATOR_H_
#include "environment.h"
#include "object.h"
#include "procedure.h"

namespace resoup{
	object evaluate(object obj, environment& env);
	object apply(procedure func, arg_list args, environment& env);
}
#endif
