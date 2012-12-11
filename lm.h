#include "outline.h"
#include "trnsctrl.h"
namespace cfe{
	class ILinkManager : public IOutline, public ITransmissionControl {
		public:
			virtual bool new_size(const IOutline* subordinate, 
					const Size& n_size) = 0;
			virtual void new_position(const IOutline* subordinate,
					const Point& n_pos) = 0;
	};
}
