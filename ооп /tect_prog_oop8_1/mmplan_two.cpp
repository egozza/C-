#include <iostream>
#include "mmplan_two.h"
using namespace std;




void plan_mm_two::MultiMethod(all_two_two *other,
                           ofstream &ofst)
{

	other->MMplan(ofst);
}

void plan_mm_two::MMplan( ofstream &ofst)
{

	ofst << "\nСамолет и Самолет\n" << endl;

}
void plan_mm_two::MMtrain(ofstream &ofst)
{

	ofst << "\nПоезд и Самолет\n" << endl;


}
void plan_mm_two::MMship(ofstream &ofst)
{
	ofst << "\nКорабль и Самолет\n" << endl;

}


void plan_mm_two::InData(ifstream &ifst) {
	ifst >>lenght>> maxWeight >>speed  >>point ;
  }
   
  void plan_mm_two::Out(ofstream &ofst) {
    ofst << "Это самолет:  дальность полета = " 
		<< lenght << "км, грузоподьемность = "  <<maxWeight << "кг, скорость="<< speed
      << "км, растояние между пунктами оправления = " << point << "км;"<<endl;
  }
  

