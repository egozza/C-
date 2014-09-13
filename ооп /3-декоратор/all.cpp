#include "all.h"
#include "train.h"
#include "plan.h"
#include <iostream>
#include <fstream>
using namespace std;


  // ¬вод параметров обобщенной фигуры 
 all*all::In(ifstream &ifst) {
	all * object;
   
    int k;
    ifst >> k;
    switch(k) {
    case 1:
	
			object=new plan;
			break;
		
    case 2:
		
			object=new train;
			break;
		
	default:
      return 0;
    }
	
	object->InData(ifst);
	return object;
  };
