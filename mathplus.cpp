#include"mathplus.h"
namespace {
	char num[12];
	void f(int x,  char * s, int& pos){
		if(x == 0) 
		{ 
			s[pos]='0' ; 
			s[pos+1]='\0' ; 
		}else{
			f(x/10, s, pos);
			s[pos++] = '0' + x % 10;
		}
	}
}
namespace math_plus{
	const char * itoa(int x){
		int pos=0;
		f(x,num,pos);
		return num;
	}
}
