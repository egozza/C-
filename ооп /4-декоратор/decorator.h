

#include "all.h"


 class decorator: public all
  {
all* object;
int mass;
public:
		all*In(ifstream &ifst);	
		void InData(ifstream &ifst);//�������
		void Out(ofstream &ofst);
		
 decorator(all*a){
 object=a;};
 decorator(){};

  };



