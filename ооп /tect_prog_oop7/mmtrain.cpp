#include <iostream>
#include "mmtrain.h"
using namespace std;



void train_mm::MultiMethod(all_two *other,
                           ofstream &ofst)
{

	other->MMtrain(ofst);
}

void train_mm::MMplan( ofstream &ofst)
{

	ofst << "\n������� � �����\n" << endl;

}
void train_mm::MMtrain(ofstream &ofst)
{

	ofst << "\n����� � �����\n" << endl;


}
void train_mm::InData(ifstream &ifst) {
 ifst >>numVag  >>speed  >>point ;
  }
   
  void train_mm::Out(ofstream &ofst) {
    ofst << "��� �����:  ����� ������� = " 
      << numVag << "����, �������� = " << speed
      << "��, ��������� ����� �������� ���������� = " << point <<"��;" <<endl;
  }