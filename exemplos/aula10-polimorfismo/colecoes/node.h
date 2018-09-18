#ifndef PDS2_NODE_H
#define PDS2_NODE_H


class Node {
private:
  Node *_esquerda;
  Node *_direita;
  int _elemento;
public:
  Node(int valor);
  ~Node();
  void inserir_elemento(int elemento);
  bool tem_elemento(int elemento);
  void imprimir();
};


#endif
