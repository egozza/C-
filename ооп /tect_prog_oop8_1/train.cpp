
#include "train.h"

using namespace std;


void train::InData(ifstream &ifst) {
 ifst >>numVag  >>speed  >>point ;
  }
   
  void train::Out(ofstream &ofst) {
    ofst << "��� �����:  ����� ������� = " 
      << numVag << "����, �������� = " << speed
      << "��, ��������� ����� �������� ���������� = " << point <<"��;" <<endl;
  }
