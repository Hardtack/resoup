#ifndef _LISP_TYPES_H_
#define _LISP_TYPES_H_
namespace resoup{
	typedef enum{
		procedureType,
		stringType, // done
		booleanType, // done
		listType, // done
		numberType, // done
		symbolType, // done
		quoteType, // done
		macroType,
		nilType // done
	} lisp_type;
}
#endif
