#include <fstream>
#include "container_two.h"
using namespace std;


void container_two::MultiMethod(ofstream &ofst) {
  ofst << "Мультиметод.\n" << endl;
  for(int i = 0; i < len - 1; i++) {
    for(int j = i + 1; j < len; j++) {
      cont[i]->MultiMethod(cont[j], ofst);
      cont[i]->Out(ofst);
      cont[j]->Out(ofst);
    }
  }
}

  container_two::container_two(): len(0) { }




  // Очистка контейнера от элементов
  void container_two::Clear()  {
    for(int i = 0; i < len; i++) {
      delete cont[i];
    }
    len = 0;


  }



    // Ввод содержимого контейнера
  void container_two::In(ifstream &ifst) {
    while(!ifst.eof()) {
      if((cont[len] = all_two::In(ifst)) != 0) {
        len++;
      }
    }
  }

    // Вывод содержимого контейнера
  void container_two::Out(ofstream &ofst) {
    ofst << "Контейнер содержет " << len 
<< " элементов." << endl;
    for(int i = 0; i < len; i++) {
      ofst << i << ": ";
      cont[i]->Out(ofst);
    }
  }


