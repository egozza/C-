#ifndef __cont_molecul__
#define __cont_molecul__
#include <iostream>
#include <fstream>
	
using namespace std;


class molecul
{
	double x,y,Vx,Vy,R,M;
public:
	static molecul* OneCont();
	static molecul* TwoCont(int N,int SizeMol,int SizeX);
	static void Moving(molecul &pt,int N,int SizeX,int SizeY,ofstream &Out);
	static void print(molecul &pt,ofstream &Out);
	static bool bang(molecul &a,molecul &b,int i,int j,ofstream &Out);

	

	//molecul();
	
};
class container
{
	enum{max_len=10000};
	int l;//число молеку
	int SizeX;//размер 
	int SizeY;
	molecul *cont[max_len];
public:
	void OneCont();
	 void TwoCont();
	 void Moving(ofstream &Out);
	 void print(ofstream &Out);
	 void bang(ofstream &Out);
	 
	
	container(int sizeX,int sizeY);
	container();
	~container();
};

#endif