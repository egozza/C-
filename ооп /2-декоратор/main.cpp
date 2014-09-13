//---------------------------------------------------
#include <iostream>
#include <fstream>
#include "container.h"
#include "decorator.h"
using namespace std;

	


int main(int argc, char* argv[]) {
	argv[1]="ifst.txt";
	argv[2]="ofst.txt";
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
    container c;
	all*a=new decorator;
	
	
	c.In( ifst,a);
    ofst << "Обзор контейнера. " << endl;
	c.Out( ofst);
	c.Clear();
    ofst << "Очитска контейнера. " << endl;
	c.Out(ofst);
	cout << "EXIT"<< endl;
return 0;
	
}
