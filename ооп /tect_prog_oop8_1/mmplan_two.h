
#include <fstream>

#include "all_two_two.h"


class plan_mm_two :public all_two_two
	{
	protected:
	int lenght,maxWeight;//переменые
	public:
void InData(ifstream &ifst);//функции 
void Out(ofstream &ofst);
  void MultiMethod(all_two_two*other, ofstream &ofst);
  void MMplan(ofstream &ofst);
  void MMtrain(ofstream &ofst); 
  void MMship(ofstream &ofst);

  plan_mm_two(){} 
		 
	};

