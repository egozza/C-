#ifndef ALL_TWO_H   
#define ALL_TWO_H  
#include "all.h"
#include <fstream>
using namespace std;


  class all_two: public all {
 
 
  public:
	
	static   all_two*In(ifstream &ifst);	   
     void InData(ifstream &ifst)=0;  
     void Out(ofstream &ofst)=0 ; 
  virtual void MultiMethod(all_two *other, ofstream &ofst)=0;
  virtual void MMplan(ofstream &ofst)=0;
  virtual void MMtrain(ofstream &ofst)=0;
    
	all_two::all_two(){}
	
  };
#endif

