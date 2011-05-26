#ifndef _LISP_ENVIRONMENT_H_
#define _LISP_ENVIRONMENT_H_
#include "symbol.h"

namespace resoup{
	class environment{
		environment* m_parent;
		public:
		environment(environment* env);
		environment(const environment& original);
		void define(symbol s, object obj);
		object find(symbol s);
	};
}
#endif
