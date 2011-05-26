#ifndef _LISP_SYMBOL_H_
#define _LISP_SYMBOL_H_
#include "object.h"
namespace resoup{
	class symbol:public object{
	protected:
		string m_name;
	public:
		symbol(string name);
		symbol(const symbol& original);

		string name();
		virtual string description();
	};
}
#endif
