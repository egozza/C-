#include "decorator.h"
#include "plan.h"
#include <iostream>
#include <fstream>
using namespace std;

all*decorator::In(ifstream & ifst)
{
all *a=new plan();
all*b;
	 if((b=new decorator( a->In(ifst))) != 0)
	 {
		 b->InData(ifst);
	 return b;
	 }
	 else
		 return 0;


};
void decorator::InData(ifstream &ifst)
{
	
	ifst>>mass;

};
void decorator::Out(ofstream &ofst)
{
	object->Out(ofst);
	ofst<<"масса груза:"<<mass<<endl;
	
	

};


