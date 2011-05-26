#ifndef _LISP_STR_H_
#define _LISP_STR_H_

#include "object.h"
namespace resoup{
	class str:public object{
	protected:
		string m_value;
	public:
		str(string value);
		str(const str& original);
		string value();

		virtual string description();
	};
}

#endif
