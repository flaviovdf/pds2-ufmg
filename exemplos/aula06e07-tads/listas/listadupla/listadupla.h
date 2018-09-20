#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H


struct node_t {
  int elemento;
  node_t *anterior;
  node_t *proximo;
};


class ListaDuplamenteEncadeada {
private:
  node_t *_inicio;
  node_t *_fim;
  int _num_elementos_inseridos;
public:
  ListaDuplamenteEncadeada();
  ~ListaDuplamenteEncadeada();
  void inserir_elemento(int elemento);
  void imprimir();
  void remove_iesimo(int i);
};


#endif
