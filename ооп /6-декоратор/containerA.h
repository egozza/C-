#include "container.h"

 class containerA:public container
 {
    
  public:
    
	void OneOut(ofstream &ofst);
    containerA();    // инициализация контейнера
    ~containerA() {Clear();} // утилизация контейнера
  };                                                              

