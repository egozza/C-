#include "containerA.h"
#include "decoratorA.h"

void containerA::Sort()
{
	for(int i=0;i<len;i++)
		for(int j=0;j<len;j++)
		{
			if(((decoratorA*)(cont[i]))->sort(*((decoratorA*)(cont[j]))))
				swap(cont[i],cont[j]);
		}


};
containerA::containerA()
{
	len=0;
}

