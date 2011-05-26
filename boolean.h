#ifndef _LISP_BOOLEAN_H_
#define _LISP_BOOLEAN_H_

#include "object.h"
namespace resoup{
	class boolean:public object{
		protected:
			bool m_value;
		public:
			boolean(bool value);
			boolean(const boolean& original);
			bool value();
			virtual string description();
	};
}
#endif
