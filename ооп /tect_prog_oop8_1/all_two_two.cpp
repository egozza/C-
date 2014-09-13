#include "all_two_two.h"
#include "mmtrain_two.h"
#include "mmplan_two.h"
#include "ship.h"
#include <iostream>
#include <fstream>
using namespace std;


  // ¬вод параметров обобщенной фигуры 
 all_two_two*all_two_two::In(ifstream &ifst) {
	all_two_two * object;
   
    int k;
    ifst >> k;
    switch(k) {
    case 1:
	
			object=new plan_mm_two;
			break;
		
    case 2:
		
			object=new train_mm_two;
			break;
		
			
	case 3: object=new ship;
			break;
		
	default:
      return 0;
    }
	
	object->InData(ifst);
	return object;
  };
