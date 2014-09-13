#include "plan.h"
#include "decorator.h"


 class decoratorA: public decorator
  {

public:
		
		all*In(ifstream &ifst);	
	  bool sort(decoratorA &a);

		
  
	  decoratorA(all*a)
	  {
 object=a;};
 decoratorA()
 {};
 ~decoratorA();

  };



