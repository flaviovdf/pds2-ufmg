#ifndef PDS2_NODE_H
#define PDS2_NODE_H


class Node {
private:
  Node *_esquerda;
  Node *_direita;
  int _elemento;
  void _inserir_no(Node *node);
public:
  Node(int valor);
  ~Node();
  void inserir_elemento(int elemento);
  bool tem_elemento(int elemento);
  void imprimir();
};


#endif
