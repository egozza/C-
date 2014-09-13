#include "all_two.h"
#include "mmtrain.h"
#include "mmplan.h"
#include <iostream>
#include <fstream>
using namespace std;


  // ¬вод параметров обобщенной фигуры 
 all_two*all_two::In(ifstream &ifst) {
	all_two * object;
   
    int k;
    ifst >> k;
    switch(k) {
    case 1:
	
			object=new plan_mm;
			break;
		
    case 2:
		
			object=new train_mm;
			break;
		
	default:
      return 0;
    }
	
	object->InData(ifst);
	return object;
  };
