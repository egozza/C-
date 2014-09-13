#include "plan.h"

#include "all.h"


 class decorator: public all
  {

public:
		all*In(ifstream &ifst);	
		void InData(ifstream &ifst);//функции
		void Out(ofstream &ofst);
		all* object;

  public:
	  float RealTime();
		
  public:
	  decorator(all*a)
	  {
		  object=a;
 };
 decorator()
 {};
 ~decorator();

  };



