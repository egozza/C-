#include <fstream>
#include "all.h"



class ship:public all
{
	int tonnage,key;
	enum type{liner,tug,tanker};
    public:
	    void InData(ifstream &ifst);//�������
		void Out(ofstream &ofst);
		ship():tonnage(0){}


};