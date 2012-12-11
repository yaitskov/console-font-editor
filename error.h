#ifndef __ERROR_H__
#define __ERROR_H__
#include<string>
#include<typeinfo>
#include"mathplus.h"
using std::string;
using std::type_info;
/*�������������� ������� ��� ���������� ������������ � ������� std::string*/
/*������������ �������� � ������ std::string*/
#define TOSTRING(A) (string(""##A))
/*�������� �� ������������ ������*/
#define DESK_MT (string("Method description:\nFile:  ") \
		+ string(__FILE__) \
		+ string("\nType:  ") + string(typeid(this).name()) \
		+ string("\nMethod:") + string(__func__) \
		+ string("\nLine:  ") + string(math_plus::itoa(__LINE__)) \
		+ string("\n"))
/*�������� �������*/
#define DESK_FN (string("Function description:\nFile:    ") \
		+ string(__FILE__) \
		+ string("\nFunction:") + string(__func__) \
		+ string("\nLine:    ") + string(math_plus::itoa(__LINE__)) \
		+ string("\n"))
/*�������� ������������ ������*/
#define DESK_SMT(CLASS)(string("Static method description:\nFile:  ") \
		+ string(__FILE__) \
		+ string("\nType:  ") + string( ##CLASS) \
		+ string("\nMethod:") + string(__func__) \
		+ string("\nLine:  ") + string(math_plus::itoa(__LINE__)) \
		+ string("\n"))

#define err_mt(msg)(string("Place: ")+desk_mt+string("Error:\n")+string(msg))
#define err_fn(msg)(string("Place: ")+desk_fn+string("Error:\n")+string(msg))
#endif
