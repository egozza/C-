#include "container.h"

#include <iostream>
using namespace std;

  // Инициализация контейнера
  container::container(): len(0) { }



  // Очистка контейнера от элементов
  void container::Clear()  {
    for(int i = 0; i < len; i++) {
      delete cont[i];
    }
    len = 0;


  }



    // Ввод содержимого контейнера
  void container::In(ifstream &ifst,all *a) {
    while(!ifst.eof()) {
      if((cont[len] = a->In(ifst)) != 0) {
		  if(len+1<max_len)//проверка на переполнение
        len++;
		  else
			  cout<<"PEREPOLENIE";
      }
    }
  }

    // Вывод содержимого контейнера
  void container::Out(ofstream &ofst) {
    ofst << "Контейнер содержет " << len 
<< " элементов." << endl;
    for(int i = 0; i < len; i++) {
      ofst << i << ": ";
      cont[i]->Out(ofst);
    }
  }


