#ifndef __SIZE_H__
#define __SIZE_H__
#include "error.h"

namespace cfe{
	class Size{
		private:
			int width,height;
		public:
			Size(int _width, int _height);
			int getWidth();
			int getHeight();
			virtual void setWidth(int );
			virtual void setHeight(int );
			virtual ~Size() {}
	};
}
#endif
