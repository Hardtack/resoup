#ifndef _LISP_QUOTE_H_
#define _LISP_QUOTE_H_
#include "object.h"
namespace resoup{
	class quote:object{
	protected:
		object m_value;
	public:
		quote(object value);
		quote(const quote& original);
		object value();
		virtual string description();
	};
}
#endif
