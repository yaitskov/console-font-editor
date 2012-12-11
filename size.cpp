#include "size.h"
using math_plus::itoa;
namespace cfe{
	Size::Size(int _width = 0, int _height = 0) 
		: width(_width), height(_height){
#ifdef _DEBUG_
		if(width < 0) throw err_mt(string("width < 0, width == ")
				+itoa(width));
		if(height < 0) throw err_mt(string("height < 0, height == ")
				+itoa(height));
#endif
	}
	 int Size::getWidth() const { return width; }
	 int Size::getHeight() const { return height; }
	void Size::setWidth(int _) { 
#ifdef _DEBUG_
		if(_ < 0) throw err_mt(string("_ < 0, _ == ")
				+itoa(_));
#endif
		width = _; 
	}
	void Size::setHeight(int _) { 
#ifdef _DEBUG_
		if(_ < 0) throw err_mt(string("_ < 0, _ == ")
				+itoa(_));
#endif
		height = _; 
	}
};
