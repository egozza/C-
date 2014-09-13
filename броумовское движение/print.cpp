#include "cont_molecul.h"
#include<omp.h>
void container::print(ofstream &Out)
{
    #pragma omp parallel for
	for(int i=0;i<l;i++){
		Out<<"Частица №"<<i<<":";
	molecul::print(*(cont[i]),Out);
	}
};
void molecul::print(molecul &pt,ofstream &Out)
{
	Out<<" x: "<<pt.x<<"    y: "<<pt.y<<"    Vx: "<<pt.Vx<<"    Vy: "<<pt.Vy<<endl<<"\n\n";

};
