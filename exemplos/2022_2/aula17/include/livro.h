#ifndef PDS2_LIVRO_H
#define PDS2_LIVRO_H

#include "item.h"

class Livro : public Item {
  private:
    int _peso;
  public:
    int get_peso();
};

#endif
