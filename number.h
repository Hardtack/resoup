#ifndef _LISP_NUMBER_H_
#define _LISP_NUMBER_H_

#include "object.h"
namespace resoup{
	class number:public object{
		protected:
			double m_value;
		public:
			number(double value);
			number(const number& original);

			virtual string description();
			double value();

			number operator +(const number& operand);
			number operator -(const number& operand);
			number operator *(const number& operand);
			number operator /(const number& operand);
			bool operator >(const number& operand);
			bool operator >=(const number& operand);
			bool operator <(const number& operand);
			bool operator <=(const number& operand);
			bool operator ==(const number& operand);

			number operator +(double operand);
			number operator -(double operand);
			number operator *(double operand);
			number operator /(double operand);
			bool operator >(double operand);
			bool operator >=(double operand);
			bool operator <(double operand);
			bool operator <=(double operand);
			bool operator ==(double operand);

			number operator +(int operand);
			number operator -(int operand);
			number operator *(int operand);
			number operator /(int operand);
			bool operator > (int operand);
			bool operator >=(int operand);
			bool operator < (int operand);
			bool operator <=(int operand);
			bool operator ==(int operand);

	};
}
#endif
