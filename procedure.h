#ifndef _LISP_PROCEDURE_H_
#define _LISP_PROCEDURE_H_
#include "object.h"
#include "environment.h"
#include "symbol.h"
#include <list>
#define UNLIMITED_ARGUMENTS -1

namespace resoup{
	typedef std::list<resoup::symbol> symbol_list;
	typedef std::list<resoup::object> arg_list;
	class procedure : public object {
		protected:
			procedure(environment& env);
			object m_body;
			environment& m_parent_env;

			symbol_list m_argSymbols;// argument symbol list
			string m_name;
		public:
			procedure(object body, symbol_list argSymbols, environment parent_env);
			procedure(const procedure& original);

			environment& parent_env();

			virtual object call(arg_list args, environment& env);
			virtual string description();

			string name();
	};
}
#endif
