#ifndef PDS2_ITEM_H
#define PDS2_ITEM_H

class Item {
  protected:
    int _peso;
  public:
    Item(int peso);
    int get_peso();
};

#endif