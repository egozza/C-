#include "all.h"

 class container  {
 public:
    enum {max_len =100}; // ������������ �����
    int len; // ������� �����
  all*cont[max_len];
  public:
    void In(ifstream &ifst,all *a);     // ���� 
    void Out(ofstream &ofst);    // ����� 
    void Clear();  // ������� ���������� �� �����
	void Sort();
    container();    // ������������� ����������
    ~container() {Clear();} // ���������� ����������
  };                                                              

