#ifndef ALL_H   
#define ALL_H  
#include <fstream>
using namespace std;


  class all {
  protected :
	  int speed,point;
 
  public:
	
	static   all*In(ifstream &ifst);	   
    virtual void InData(ifstream &ifst)=0;  
    virtual void Out(ofstream &ofst)=0 ; 
	all::all():speed(0),point(0){}
	
  };
#endif

