
#include "train.h"

using namespace std;


void train::InData(ifstream &ifst) {
 ifst >>numVag  >>speed  >>point ;
  }
   
  void train::Out(ofstream &ofst) {
    ofst << "Это поезд:  число вагонов = " 
      << numVag << "штук, скорость = " << speed
      << "км, растояние между пунктами оправления = " << point <<"км;" <<endl;
  }
