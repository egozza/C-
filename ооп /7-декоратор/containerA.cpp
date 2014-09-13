#include "containerA.h"
#include "decorator.h"



void containerA::Multimetod(ofstream &ofst)
{



	ofst << "Ìףכüעטלועמה.\n" << endl;
  for(int i = 0; i < len ; i++) {
    for(int j = i ; j < len; j++) {
      (dynamic_cast <decorator*>(cont[i]))->Multimetod(*(dynamic_cast<decorator*>(cont[j])), ofst);
      cont[i]->Out(ofst);
      cont[j]->Out(ofst);
    }
  }










};
containerA::containerA()
{
	len=0;
}


