#include "all_two.h"

 class container_two  {
   enum {max_len = 100}; // ������������ �����
    int len; // ������� �����
  all_two*cont[max_len];
  public:
    void In(ifstream &ifst);     // ���� 
    void Out(ofstream &ofst); 
	void MultiMethod(ofstream &ofst);// ����� 
    void Clear();  // ������� ���������� �� �����
    container_two();    // ������������� ����������
    ~container_two() {Clear();} // ���������� ����������
  };                                                              

