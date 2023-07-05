#ifndef PDS2_LISTAIF_H
#define PDS2_LISTAIF_H

class ListaIF {
  public:
    virtual ~ListaIF() {};
    virtual void inserir_elemento(int e) = 0;
    virtual void imprimir() = 0;
};


#endif