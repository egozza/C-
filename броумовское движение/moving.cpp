#include "cont_molecul.h"
#include <omp.h>



void container::Moving(ofstream &Out)
{
#pragma omp parallel for
	for(int i=0;i<l;i++)
		molecul::Moving(*(cont[i]),i,SizeX,SizeY,Out);


};

void molecul::Moving(molecul &pt,int N,int SizeX,int SizeY,ofstream &Out)
{
	double tempX,tempY;
	tempX=pt.x+pt.Vx;
	tempY=pt.y+pt.Vy;
	if(tempX<=SizeX)
		if(tempX>=0)
		pt.x=tempX;
	else{
		
		pt.Vx=pt.Vx*(-1);
		pt.x=0;
		Out<<"������� �:"<<N<<" ������������ �� �������� � ,���������� ����� �:"<<pt.x<<" Y:"<<pt.y<<endl;
	}
	else
		{
		pt.Vx=pt.Vx*(-1);
		pt.x=SizeX;
		Out<<"������� �:"<<N<<" ������������ �� �������� C ,���������� ����� �:"<<pt.x<<" Y:"<<pt.y<<endl;
	}


	if(tempY<=SizeY)
		if(tempY>=0)
		pt.y=tempY;
	else{
		pt.Vy=pt.Vy*(-1);
		pt.y=0;
		Out<<"������� �:"<<N<<" ������������ �� �������� B ,���������� ����� �:"<<pt.x<<" Y:"<<pt.y<<endl;
	}
	else
	{
		pt.Vy=pt.Vy*(-1);
		pt.y=SizeY;
		Out<<"������� �:"<<N<<" ������������ �� �������� D ,���������� ����� �:"<<pt.x<<" Y:"<<pt.y<<endl;

	}
};