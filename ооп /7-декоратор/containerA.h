#include "container.h"

 class containerA:public container
 {
  public:
    void Multimetod(ofstream &ofst);

     // ������� ���������� �� �����
    containerA();    // ������������� ����������
    ~containerA() {Clear();} // ���������� ����������
  };                                                              

