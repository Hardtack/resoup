#ifndef _LISP_OBJECT_H_
#define _LISP_OBJECT_H_

#include "lispTypes.h"
#include <string>

using std::string;
namespace resoup{
	class object{

		private:
			lisp_type m_type;

		public:
			object(lisp_type type);
			object();
			lisp_type type();
			virtual string description();
	};
}

#endif
