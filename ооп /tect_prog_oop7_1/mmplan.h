
#include <fstream>
#include "plan.h"
#include "all_two.h"


class plan_mm :public all_two
	{
	protected:
	int lenght,maxWeight;//���������
	public:
void InData(ifstream &ifst);//������� 
void Out(ofstream &ofst);
  void MultiMethod(all_two*other, ofstream &ofst);
  void MMplan(ofstream &ofst);
  void MMtrain(ofstream &ofst); 

  plan_mm(){} 
		 
	};

