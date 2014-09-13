#include "all_two_two.h"

 class container_two_two  {
   enum {max_len = 100}; // максимальная длина
    int len; // текущая длина
  all_two_two*cont[max_len];
  public:
    void In(ifstream &ifst);     // ввод 
    void Out(ofstream &ofst); 
	void MultiMethod(ofstream &ofst);// вывод 
    void Clear();  // очистка контейнера от фигур
    container_two_two();    // инициализация контейнера
    ~container_two_two() {Clear();} // утилизация контейнера
  };                                                              

