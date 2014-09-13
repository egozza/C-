#include "decorator.h"
#include "ship.h"
#include <iostream>
#include <fstream>
using namespace std;

all*decorator::In(ifstream & ifst)
{int k;
	all*a=new ship();
	all*b=new decorator;
	 if((b = a->In(ifst)) != 0)
	return b;
	 else
		 ifst.seekg(-1,ios::cur);
	 ifst>>k;
		 if(k==3)
		 {
		 b=new ship();
	 b->InData(ifst);
	 return b;
		 }
		 else return 0;
	


};
void decorator::InData(ifstream &ifst)
{
	this->InData(ifst);

};
void decorator::Out(ofstream &ofst)
{
	this->Out(ofst);

};
