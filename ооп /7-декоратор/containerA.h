#include "container.h"

 class containerA:public container
 {
  public:
    void Multimetod(ofstream &ofst);

     // очистка контейнера от фигур
    containerA();    // инициализация контейнера
    ~containerA() {Clear();} // утилизация контейнера
  };                                                              

