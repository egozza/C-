//---------------------------------------------------
#include <iostream>
#include <fstream>
#include "container.h"
#include "container_two_two.h"
using namespace std;

	


int main(int argc, char* argv[]) {
	argv[1]="ifst.txt";
	argv[2]="ofst.txt";
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
    container_two_two c;
	
	c.In( ifst);
    ofst << "Обзор контейнера. " << endl;
	c.MultiMethod(ofst);
	//c.Out( ofst);
	c.Clear();



	
    ofst << "Очитска контейнера. " << endl;
	c.Out(ofst);
	cout << "EXIT"<< endl;
return 0;
}
