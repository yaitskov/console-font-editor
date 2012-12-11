#ifndef __INPANELADDRESS_H__
#define __INPANELADDRESS_H__
/*Path - создан для управления прямыми и обратными адресами
 * InPanelAddress - последовательность номеров вершин начиная скорня,
 * где номер порядковый номер в группе.*/
#include <vector>
#include <stdlib.h>
using std::vector;
namespace cfe{
	class InPanelAddress {
		private:
			vector<int> adr;
		public:
			//1 если _ является началом this
			bool start_with(const InPanelAddress& _) const;
			//удаляет последний элемент адреса
			void trunc_one();
			//удаляет и возвращает первый элемент адреса 
			int push();
			//возвращает указанный элемент адреса
			int& operator[](int position) const;
	};
}
#endif
