
#include "plan.h"

using namespace std;


void plan::InData(ifstream &ifst) {
	ifst >>lenght>> maxWeight >>speed  >>point ;
  }
   
  void plan::Out(ofstream &ofst) {
    ofst << "��� �������:  ��������� ������ = " 
		<< lenght << "��, ���������������� = "  <<maxWeight << "��, ��������="<< speed
      << "��, ��������� ����� �������� ���������� = " << point << "��;"<<endl;
  }
  