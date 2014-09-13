

#include "all.h"


 class decorator: public all
  {
 
public:
 all*In(ifstream &ifst);	
  void InData(ifstream &ifst);//функции
		void Out(ofstream &ofst);
		decorator(){};

  };



