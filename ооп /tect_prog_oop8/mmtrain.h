
#include <fstream>
#include "train.h"
#include "all_two.h"


class train_mm :public all_two
	{
	protected:
	int numVag;//переменые
	public:
  void InData(ifstream &ifst);
  void Out(ofstream &ofst);
  void MultiMethod(all_two*other, ofstream &ofst);
  void MMplan(ofstream &ofst);
  void MMtrain(ofstream &ofst); 

  train_mm(){} 
		 
	};

