#ifndef PDS2_COLECAO_H
#define PDS2_COLECAO_H

class ColecaoIF {
public:
  virtual ~ColecaoIF() {};
  virtual void inserir_elemento(int elemento) = 0;
  virtual void imprimir() = 0;
  virtual int tamanho() = 0;
};


#endif
