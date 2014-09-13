#include <iostream>
#include "mmplan.h"
using namespace std;




void plan_mm::MultiMethod(all_two *other,
                           ofstream &ofst)
{

	other->MMplan(ofst);
}

void plan_mm::MMplan( ofstream &ofst)
{

	ofst << "\nСамолет и Самолет\n" << endl;

}
void plan_mm::MMtrain(ofstream &ofst)
{

	ofst << "\nПоезд и Самолет\n" << endl;


}


void plan_mm::InData(ifstream &ifst) {
	ifst >>lenght>> maxWeight >>speed  >>point ;
  }
   
  void plan_mm::Out(ofstream &ofst) {
    ofst << "Это самолет:  дальность полета = " 
		<< lenght << "км, грузоподьемность = "  <<maxWeight << "кг, скорость="<< speed
      << "км, растояние между пунктами оправления = " << point << "км;"<<endl;
  }
  

