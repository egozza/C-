
#include <fstream>
#include "all_two_two.h"


class train_mm_two :public all_two_two
	{protected:
	int numVag;//переменые
	
	public:
void InData(ifstream &ifst);//функции 
void Out(ofstream &ofst);
  void MultiMethod(all_two_two*other, ofstream &ofst);
  void MMplan(ofstream &ofst);
  void MMtrain(ofstream &ofst); 
  void MMship(ofstream &ofst);

  train_mm_two(){} 
		 
	};

