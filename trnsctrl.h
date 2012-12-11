#ifndef __TRANSMISSIONCONTROL_H__
#define __TRANSMISSIONCONTROL_H__
#include "inpanadr.h"
namespace cfe{
	class ITransmissionControl {
		protected:
			virtual bool Enter(bool& seq_index, 
					InPanelAddress& direct,
					InPanelAddress& back) = 0;
	};
}
#endif
