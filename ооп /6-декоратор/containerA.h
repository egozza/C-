#include "container.h"

 class containerA:public container
 {
    
  public:
    
	void OneOut(ofstream &ofst);
    containerA();    // ������������� ����������
    ~containerA() {Clear();} // ���������� ����������
  };                                                              

