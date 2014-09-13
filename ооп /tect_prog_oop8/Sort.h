#include "container.h"

 class sort :public container {
 
  public:
	 void In(ifstream &ifst);     // ввод 
    void Out(ofstream &ofst);    // вывод 
    void Clear(); 
  void sort_cont();
     // очистка контейнера от фигур
   sort();    // инициализация контейнера
    ~sort() {Clear();} // утилизация контейнера
  };

