#ifndef TRAIN_H    
#define TRAIN_H  
#include <fstream>
#include "all.h" 


	class train : public all
	{
	protected:
	int numVag;//переменые
	public:
		void InData(ifstream &ifst);//функции
		void Out(ofstream &ofst);
		train():numVag(0){}//конструктор

	};
	
#endif TRAIN_H