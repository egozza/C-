#include "decorator.h"
#include "plan.h"
#include "train.h"
#include <iostream>
#include <fstream>
using namespace std;

all*decorator::In(ifstream & ifst)
{

	all * object;
   
    int k;
    ifst >> k;
    switch(k) {
    case 1:
	
			object=new decorator(new plan());
			break;
		
    case 2:
		
			object=new decorator(new train);
			break;
		
	default:
      return 0;

	}
	object->InData(ifst);
	return object;
};
void decorator::InData(ifstream &ifst)
{
	object->InData(ifst);
	

};
void decorator::Out(ofstream &ofst)
{
	object->Out(ofst);
	
	
	

};

bool decorator::typeTrue()
{
if(dynamic_cast<plan*>(object))
	return true;
return false;

};

