

#include "all.h"


 class decorator: public all
  {
 
public:
 all*In(ifstream &ifst);	
  void InData(ifstream &ifst);//�������
		void Out(ofstream &ofst);
		decorator(){};

  };



