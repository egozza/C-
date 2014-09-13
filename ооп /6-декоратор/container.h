#include "all.h"

 class container  {
 public:
    enum {max_len =100}; // максимальная длина
    int len; // текущая длина
  all*cont[max_len];
  public:
    void In(ifstream &ifst,all *a);     // ввод 
    void Out(ofstream &ofst);    // вывод 
    void Clear();  // очистка контейнера от фигур
	void Sort();
    container();    // инициализация контейнера
    ~container() {Clear();} // утилизация контейнера
  };                                                              

