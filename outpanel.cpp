#include "outpanel.h"
#include "curses.h"
#include "error.h"


#ifdef _DEBUG_
#define TEST_RANGE_COLORS(var,morf) if(color >= COLORS) \
			throw morf(string("var == ") \
				+ string(itoa(var)) + string(", > ") \
				+ string(itoa(COLORS)));
#else
#define TEST_RANGE_COLORS(var,morf) 
#endif
namespace cfe{
	short OutPanel::def_foreground = COLOR_WHITE;
	short OutPanel::def_background = COLOR_BLACK;
	short OutPanel::testForeground(short color){
		return testColor(color);
	}
	short OutPanel::testBackground(short color){
		return testColor(color);
	}
	short OutPanel::testColor(short color){
		TEST_RANGE_COLORS(color,desk_fn)
		return color;
	}
	void OutPanel::setBackground(short _){
		TEST_RANGE_COLORS(_,desk_mt)
		return _;
	}
	void OutPanel::setForeground(short _){
		TEST_RANGE_COLORS(_,desk_mt)
		return _;
	}
	void OutPanel::paint(){
		
	int OutPanel::setX();
	int OutPanel::setY();
	int OutPanel::setWidth();
	int OutPanel::setHeight();
}

