#include "decoratorA.h"
#include "plan.h"
#include "train.h"
#include <iostream>
#include <fstream>
using namespace std;

all*decoratorA::In(ifstream & ifst)
{

	all * object;
   
    int k;
    ifst >> k;
    switch(k) {
    case 1:
	
			object=new decoratorA(new plan());
			break;
		
    case 2:
		
			object=new decoratorA(new train);
			break;
		
	default:
      return 0;

	}
	object->InData(ifst);
	return object;
};

bool decoratorA::sort(decoratorA &a)
{
	if(RealTime()>a.RealTime())
		return true;
	return false;

}


