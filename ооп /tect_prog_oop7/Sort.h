#include "container.h"

 class sort :public container {
 
  public:
	 void In(ifstream &ifst);     // ���� 
    void Out(ofstream &ofst);    // ����� 
    void Clear(); 
  void sort_cont();
     // ������� ���������� �� �����
   sort();    // ������������� ����������
    ~sort() {Clear();} // ���������� ����������
  };

