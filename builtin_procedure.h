#ifndef _BUILTIN_PROCEDURE_H_
#define _BUILTIN_PROCEDURE_H_
#include "procedure.h"
namespace resoup{
	class plus_procedure : public procedure{
		public:
			plus_procedure(environment& env):procedure(env){
				this->m_name = "+";
			}
			virtual object call(arg_list args, environment& env);
	};
	class minus_procedure : public procedure{
		public:
			minus_procedure(environment& env):procedure(env){
				this->m_name = "-";
			}
			virtual object call(arg_list args, environment& env);
	};
	class multiply_procedure : public procedure{
		public:
			multiply_procedure(environment& env):procedure(env){
				this->m_name = "*";
			}
			virtual object call(arg_list args, environment& env);
	};
	class divide_procedure : public procedure{
		public:
			divide_procedure(environment& env):procedure(env){
				this->m_name = "/";
			}
			virtual object call(arg_list args, environment& env);
	};
	class equal_procedure : public procedure{
		public:
			equal_procedure(environment& env):procedure(env){
				this->m_name = "=";
			}
			virtual object call(arg_list args, environment& env);
	};
	class gt_procedure : public procedure{
		public:
			gt_procedure(environment& env):procedure(env){
				this->m_name = ">";
			}
			virtual object call(arg_list args, environment& env);
	};
	class lt_procedure : public procedure{
		public:
			lt_procedure(environment& env):procedure(env){
				this->m_name = "<";
			}
			virtual object call(arg_list args, environment& env);
	};
	class ge_procedure : public procedure{
		public:
			ge_procedure(environment& env):procedure(env){
				this->m_name = ">=";
			}
			virtual object call(arg_list args, environment& env);
	};
	class le_procedure : public procedure{
		public:
			le_procedure(environment& env):procedure(env){
				this->m_name = "<=";
			}
			virtual object call(arg_list args, environment& env);
	};
	class car_procedure : public procedure{
		public:
			car_procedure(environment& env):procedure(env){
				this->m_name = "car";
			}
			virtual object call(arg_list args, environment& env);
	};
	class cdr_procedure : public procedure{
		public:
			cdr_procedure(environment& env):procedure(env){
				this->m_name = "cdr";
			}
			virtual object call(arg_list args, environment& env);
	};
	class cons_procedure : public procedure{
		public:
			cons_procedure(environment& env):procedure(env){
				this->m_name = "cons";
			}
			virtual object call(arg_list args, environment& env);
	};
	class display_procedure : public procedure{
		public:
			display_procedure(environment& env):procedure(env){
				this->m_name = "display";
			}
			virtual object call(arg_list args, environment& env);
	};
	class newline_procedure : public procedure{
		public:
			newline_procedure(environment& env):procedure(env){
				this->m_name = "newline";
			}
			virtual object call(arg_list args, environment& env);
	};
	class eval_procedure : public procedure{
		public:
			eval_procedure(environment& env):procedure(env){
				this->m_name = "eval";
			}
			virtual object call(arg_list args, environment& env);
	};
	class exit_procedure : public procedure{
		public:
			exit_procedure(environment& env):procedure(env){
				this->m_name = "exit";
			}
			virtual object call(arg_list args, environment& env);
	};

}
#endif
