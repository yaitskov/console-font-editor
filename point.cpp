#include "point.h"
using math_plus::itoa;
namespace cfe{
	Point::Point(int _x = 0, int _y = 0) : x(_x), y(_y){
#ifdef _DEBUG_
		if(x < 0) throw err_mt(string("x < 0, x == ")
				+itoa(x));
		if(y < 0) throw err_mt(string("y < 0, y == ")
				+itoa(y));
#endif
	}
	 int Point::getX() const { return x; }
	 int Point::getY() const { return y; }
	void Point::setX(int _) { 
#ifdef _DEBUG_
		if(_ < 0) throw err_mt(string("_ < 0, _ == ")
				+itoa(_));
#endif
		x = _; 
	}
	void Point::setY(int _) { 
#ifdef _DEBUG_
		if(_ < 0) throw err_mt(string("_ < 0, _ == ")
				+itoa(_));
#endif
		y = _; 
	}
};
