#ifndef __POINT_H__
#define __POINT_H__
#include "error.h"

namespace cfe{
	class Point{
		private:
			int x,y;
		public:
			Point(int _x, int _y);
			int getX();
			int getY();
			virtual void setX(int );
			virtual void setY(int );
			virtual ~Point(){}
	};
}
#endif
