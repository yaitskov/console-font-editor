#include "point.h"
#include "size.h"

namespace cfe{
	class IOutline : public Point, public Size {
		friend class ILinkManager;
		private:
			IOutline * father;
			int number;
		protected:
			IOutline(const Point& position, const Size& size) 
				: Point(position), Size(size),
					 father(0), number(0){} 
			IOutline * getFather() { return father;}
		public:
			IOutline() : father(0), number(0){}
			IOutline(const IOutline& _): father(0), number(0){}
			IOutline& operator=(const IOutline& _){ return *this;}
			virtual void paint() = 0 ;
			~IOutline(){}
	};
}
