
#include "ship.h"
#include <string>

using namespace std;


void ship::InData(ifstream &ifst) {
	int i;
	ship::type one;
	ifst >>i>>tonnage
		>>speed  >>point ;
	switch(i)
	{
	case ship::type::liner: key=i;break;
	case ship::type::tanker: key=i;break;
	case ship::type::tug: key=i;break;
	}

	

  }
   
  void ship::Out(ofstream &ofst) {
	 string st;
	  	switch(key)
	{
		case ship::type::liner:st="лайнер"; break;
		case ship::type::tanker:st="танкер"; ;break;
		case ship::type::tug:st="буксир"; ;break;
	}

    ofst << "Это корабль:  тип судна = " 
		<<st << ","<< "водоизмещение"<<tonnage<<"куб/м, скорость = " << speed
      << "км, растояние между пунктами оправления = " << point <<"км;" <<endl;
  }
