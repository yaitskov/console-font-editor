#ifndef __INPANELADDRESS_H__
#define __INPANELADDRESS_H__
/*Path - ������ ��� ���������� ������� � ��������� ��������
 * InPanelAddress - ������������������ ������� ������ ������� ������,
 * ��� ����� ���������� ����� � ������.*/
#include <vector>
#include <stdlib.h>
using std::vector;
namespace cfe{
	class InPanelAddress {
		private:
			vector<int> adr;
		public:
			//1 ���� _ �������� ������� this
			bool start_with(const InPanelAddress& _) const;
			//������� ��������� ������� ������
			void trunc_one();
			//������� � ���������� ������ ������� ������ 
			int push();
			//���������� ��������� ������� ������
			int& operator[](int position) const;
	};
}
#endif
