#include "inpaneladdress.h"
#include "mathplus.h"
using math_plus::itoa;
bool cfe::InPanelAddress::start_with(const InPanelAddress& _) const{
	int i = _.adr.size();
	if(i > adr.size()) return false;
	while(i >= 0) 
		if( adr[i] != adr[i--] )
			return false;
	return true;
}
void cfe::InPanelAddress::trunc_one(){
#ifdef _DEBUG_
	if(adr.size() == 0) throw err_mt("adr.size() == 0");
#endif
	adr.erase(--adr.end());
}
int cfe::InPanelAddress::push(){
	int a;
#ifdef _DEBUG_
	if(adr.size() == 0) throw err_mt("adr.size() == 0");
#endif
	a = adr[0];
	adr.erase(adr.begin());
	return a;
}
int& cfe::InPanelAddress::operator[](int position) const{
#ifdef _DEBUG_
	if(adr.size() <= position) 
		throw err_mt(string("out_of_range; position == ")
				+ itoa(position));
#endif
	return adr[position];
}
