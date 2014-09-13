#include "container.h"

#include <iostream>
using namespace std;

  // ������������� ����������
  container::container(): len(0) { }



  // ������� ���������� �� ���������
  void container::Clear()  {
    for(int i = 0; i < len; i++) {
      delete cont[i];
    }
    len = 0;


  }



    // ���� ����������� ����������
  void container::In(ifstream &ifst,all *a) {
    while(!ifst.eof()) {
      if((cont[len] = a->In(ifst)) != 0) {
		  if(len+1<max_len)//�������� �� ������������
        len++;
		  else
			  cout<<"PEREPOLENIE";
      }
    }
  }

    // ����� ����������� ����������
  void container::Out(ofstream &ofst) {
    ofst << "��������� �������� " << len 
<< " ���������." << endl;
    for(int i = 0; i < len; i++) {
      ofst << i << ": ";
      cont[i]->Out(ofst);
    }
  }


