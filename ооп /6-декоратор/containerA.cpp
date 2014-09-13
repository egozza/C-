#include "containerA.h"
#include "decorator.h"


void containerA::OneOut(ofstream &ofst)
{
	for(int i=0;i<len;i++)
	{
		if((dynamic_cast<plan*>(cont[i])))
			cont[i]->Out(ofst);
	}

};
containerA::containerA()
{
	len=0;
}

