#ifndef PLAN_H  
#define PLAN_H  
#include <fstream>
#include "all.h"


class plan :public all
	{
	protected:
	int lenght,maxWeight;//���������
	public:
		void InData(ifstream &ifst);//������� 
		void Out(ofstream &ofst);
		plan():lenght(0),maxWeight(0){}

	};
#endif
