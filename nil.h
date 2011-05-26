#ifndef _LISP_NIL_H_
#define _LISP_NIL_H_
#include "object.h"
namespace resoup{
	class nil:public object{
		virtual string description();
	};
}
#endif
