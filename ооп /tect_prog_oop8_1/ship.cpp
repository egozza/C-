
#include "ship.h"
#include <string>

using namespace std;



void ship::MultiMethod(all_two_two *other,
                           ofstream &ofst)
{

	other->MMship(ofst);
}
void ship::MMplan( ofstream &ofst)
{

	ofst << "\n������� � �������\n" << endl;

}
void ship::MMtrain(ofstream &ofst)
{

	ofst << "\n����� � �������\n" << endl;


}
void ship::MMship(ofstream &ofst)
{
	ofst << "\n������� � �������\n" << endl;


}

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
		case ship::type::liner:st="������"; break;
		case ship::type::tanker:st="������"; ;break;
		case ship::type::tug:st="������"; ;break;
	}

    ofst << "��� �������:  ��� ����� = " 
		<<st << ","<< "�������������"<<tonnage<<"���/�, �������� = " << speed
      << "��, ��������� ����� �������� ���������� = " << point <<"��;" <<endl;
  }
