#ifndef TRAIN_H    
#define TRAIN_H  
#include <fstream>
#include "all.h" 


	class train : public all
	{
	protected:
	int numVag;//���������
	public:
		void InData(ifstream &ifst);//�������
		void Out(ofstream &ofst);
		train():numVag(0){}//�����������

	};
	
#endif TRAIN_H