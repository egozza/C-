#include <iostream>
#include "mmtrain_two.h"
using namespace std;



void train_mm_two::MultiMethod(all_two_two *other,
                           ofstream &ofst)
{

	other->MMtrain(ofst);
}
void train_mm_two::MMplan( ofstream &ofst)
{

	ofst << "\n������� � �����\n" << endl;

}
void train_mm_two::MMtrain(ofstream &ofst)
{

	ofst << "\n����� � �����\n" << endl;


}
void train_mm_two::MMship(ofstream &ofst)
{
	ofst << "\n������� � �����\n" << endl;


}
void train_mm_two::InData(ifstream &ifst) {
 ifst >>numVag  >>speed  >>point ;
  }
   
  void train_mm_two::Out(ofstream &ofst) {
    ofst << "��� �����:  ����� ������� = " 
      << numVag << "����, �������� = " << speed
      << "��, ��������� ����� �������� ���������� = " << point <<"��;" <<endl;
  }