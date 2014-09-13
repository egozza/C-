#include <iostream>
#include "cont_molecul.h"
#include <fstream>
#include <time.h>
#include <omp.h>


using namespace std;


int main()


{
	clock_t start,end;

	setlocale(LC_CTYPE, "Russian");
	ofstream Out_Sten("Stol_Sten.txt");
	ofstream Out_Chast("Stol_Chast.txt");
	ofstream Out_Moving("Moving.txt");


int num_op,N,SizeX,SizeY;


cout<<"	�������� ����������� ������ ��� ������������ ����������";
cout<<"	\n�������� ����� ������\n	(1)- 2 ������� � ��������� ����������� ;(2)- ����� ����� ������ � ���������� ������������\n\n �����:  ";
cin>>num_op;

cout<<"	\n����� ���������"<<endl;
cin>>N;
cout<<"	������ ������"<<endl;
cin>>SizeX>>SizeY;
container a(SizeX,SizeY);

switch(num_op)
{
case 1:
	{
		a.OneCont();
	start=clock();

for(int i=0;i<N;i++){
a.bang(Out_Chast);
a.Moving(Out_Sten);
a.print(Out_Moving);
cout<<(N/100)*i<<"%"<<endl;
}
end=clock();
cout<<"	����� ���������� ���������:"<<end-start<<endl;
cout<<"	������� ����� ������� ��� ���������� ���������...";
	cin>>N;

break;
	}
case 2:
	{

a.TwoCont();
start=clock();

for(int i=0;i<N;i++){
	a.bang(Out_Chast);
a.Moving(Out_Sten);
a.print(Out_Moving);
//system("cls");
//cout<<((float)(i)/(float)(N))*100<<"%"<<endl;
}
end=clock();
cout<<"	����� ���������� ���������:"<<end-start<<endl;
cout<<"	������� ����� ������� ��� ���������� ���������...";
	cin>>N;
break;
	}
default:
	{
		cout<<"ERROR  ������ �� ������������ �����";
		break;

	}

}





}
