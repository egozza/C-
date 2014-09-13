
#include "Sort.h"
#include "function.h"
#include "all.h"


void sort::sort_cont()
{
	 func f;
	all*buf;
	float mass_a;
	float mass_b;
	for (int i=0;i<len;i++)

	{
		f.getpam(cont[i]->point,cont[i]->speed);
		mass_a=f.IdelTime();
		for(int j=0;j<len;j++)
		{f.getpam(cont[j]->point,cont[j]->speed);
		mass_b=f.IdelTime();
		if(mass_a>mass_b)
		{
			buf=cont[i];
		cont[i]=cont[j];
		cont[j]=buf;

		}



		}

	}


}

  // Инициализация контейнера
 sort::sort()  { }




  // Очистка контейнера от элементов
  void sort::Clear()  {
    for(int i = 0; i < len; i++) {
      delete cont[i];
    }
    len = 0;


  }



    // Ввод содержимого контейнера
  void sort::In(ifstream &ifst) {
    while(!ifst.eof()) {
      if((cont[len] = all::In(ifst)) != 0) {
        len++;
      }
    }
  }

    // Вывод содержимого контейнера
  void sort::Out(ofstream &ofst) {
	 
    ofst << "Контейнер содержет " << len 
<< " элементов." << endl;
    for(int i = 0; i < len; i++) {
      ofst << i << ": ";
      cont[i]->Out(ofst);
    }
  }


