#include "cont_molecul.h"
#include <iostream>
#include<stdlib.h>
#include <omp.h>
#include <ctime>
using namespace std;


container::container()
{
	l=0;
	SizeX=100;
SizeY=100;



};
container::container(int sizeX,int sizeY)
{l=0;
	SizeX=sizeX;
	SizeY=sizeY;


};
container::~container()
{


};
void container::OneCont()
{
	cout<<"Первый режим."<<endl;

	cout<<"Ввидите координаты X ,координаты Y,массу,скорость Х , скорость У первой частицы:"<<endl;
	cont[l]=molecul::OneCont();
	l++;
	cout<<"Ввидите координаты,массу,скорость Х , скорость У второй частицы:"<<endl;
	cont[l]=molecul::OneCont();
	l++;

};
void container::TwoCont()
{int N;
cout<<"Второй режим."<<endl;
cout <<"Ввидите число молекул"<<endl;
cin>>N;
int SizeMol=(SizeX*SizeY)/N;
if(SizeMol>1)
	#pragma omp parallel for
for(int i=0;i<N;i++)
{

	cont[l]=molecul::TwoCont(i,SizeMol,SizeX);

	l++;

}
else cout<<"Ошибка , число часиц слишком велико для данного сосуда"<<endl;


};
molecul*molecul::OneCont()
{
	molecul*pt=new molecul;
	cout<<"X:";
	cin>>pt->x;
	cout<<"\nY:";
		cin>>pt->y;
		cout<<"\nM:";
		cin>>pt->M;
		cout<<"\nVx:";
		cin>>pt->Vx;
		cout<<"\nVy:";
		cin>>pt->Vy;
		cout<<"\R:";
		cin>>pt->R;

	return pt;


};
molecul*molecul::TwoCont(int N,int SizeMol,int SizeX)

{

molecul*pt=new molecul;
pt->y=(int)((N*SizeMol)/SizeX)+1;
if(N==0)
	pt->x=1;
else
pt->x=(SizeX-((SizeX*pt->y)-(N*SizeMol)))+1;
pt->Vx=rand()%(200)-100;
pt->Vx=pt->Vx/100;
	pt->Vy=rand()%(200)-100;
	pt->Vy=pt->Vy/100;
	pt->M=rand()%(100)+0;
	pt->M=pt->M/100;
	pt->R=rand()%(2)-1;


return pt;


};





