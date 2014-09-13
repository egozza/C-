#include "container.h"

 class containerA:public container
 {
    
  public:
    
	void Sort();
    containerA();    // инициализация контейнера
    ~containerA() {Clear();} // утилизация контейнера
  };                                                              

