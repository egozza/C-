#include "all.h"

 class container  {
    enum {max_len = 100}; // ������������ �����
    int len; // ������� �����
  all*cont[max_len];
  public:
    void In(ifstream &ifst);     // ���� 
    void Out(ofstream &ofst);    // ����� 
    void Clear();  // ������� ���������� �� �����
    container();    // ������������� ����������
    ~container() {Clear();} // ���������� ����������
  };                                                              

