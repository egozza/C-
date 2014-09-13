#include "cont_molecul.h"
#include <omp.h>
bool molecul::bang(molecul &a,molecul &b,int i,int j,ofstream & Out)
{
 if (((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)) < 4 * a.R * a.R)
 {
swap(a.Vy,b.Vy);
 swap(a.Vx,b.Vx);
 Out<<"стокновение частицы №"<<i<<" с  частицей:"<<j<<" координаты частицы "<<i <<" Х: "<<a.x<< " Y: "<<a.y<<" координаты частицы "<<j <<" Х: "<<b.x<< " Y: "<<b.y<<endl;
 return true;
 }
 return false;
};
void container::bang(ofstream &Out)
{
#pragma omp parallel for
	for(int i=0;i<l;i++)
	{
#pragma omp parallel for
		for(int j=i+1;j<l;j++)
		{
		if(	molecul::bang(*cont[i],*cont[j],i,j,Out))
			break;
		}	}
};