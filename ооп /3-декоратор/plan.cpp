
#include "plan.h"

using namespace std;


void plan::InData(ifstream &ifst) {
	ifst >>lenght>> maxWeight >>speed  >>point ;
  }
   
  void plan::Out(ofstream &ofst) {
    ofst << "Это самолет:  дальность полета = " 
		<< lenght << "км, грузоподьемность = "  <<maxWeight << "кг, скорость="<< speed
      << "км, растояние между пунктами оправления = " << point << "км;"<<endl;
  }
  