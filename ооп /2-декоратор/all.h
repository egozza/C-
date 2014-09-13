#ifndef ALL_H   
#define ALL_H  
#include <fstream>
using namespace std;


  class all {
  protected :
	  int speed,point;
 
  public:
	
	virtual all*In(ifstream &ifst);	   
    virtual void InData(ifstream &ifst)=0;  
    virtual void Out(ofstream &ofst)=0 ; 

	
	
  };
#endif

