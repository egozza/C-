#include "plan.h"

#include "all.h"


 class decorator: public all
  {
all* object;
public:
		all*In(ifstream &ifst);	
		void InData(ifstream &ifst);//функции
		void Out(ofstream &ofst);

  public:
	  void Multimetod(decorator &a,ofstream &ofst);
		
  public:
	  decorator(all*a){
 object=a;};
 decorator()
 {};
 ~decorator();

  };



