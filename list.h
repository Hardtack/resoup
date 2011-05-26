#ifndef _LISP_LIST_H_
#define _LISP_LIST_H_
#include "object.h"

namespace resoup{
	class list:public object{
		private:
			object **m_elements;
			unsigned int m_size;;
		public:

			list();

			list(const list &original);
			~list();
			void add(object& item);
			int size();
			object get(int idx);

			virtual string description();
	};
}
#endif
