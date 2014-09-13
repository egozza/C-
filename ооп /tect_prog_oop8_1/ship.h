#include <fstream>
#include "all_two_two.h"



class ship:public all_two_two
{
	int tonnage,key;
	enum type{liner,tug,tanker};
    public:
	    void InData(ifstream &ifst);//функции
		void Out(ofstream &ofst);
		void MultiMethod(all_two_two*other, ofstream &ofst);
  void MMplan(ofstream &ofst);
  void MMtrain(ofstream &ofst); 
  void MMship(ofstream &ofst);
		ship():tonnage(0){}


};