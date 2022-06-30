#ifndef PDS2_MAT_H
#define PDS2_MAT_H

int fatorial(int n);

enum TipoTriangulo {
  EQ, IS, ES
};

TipoTriangulo verifica_tipo(
  int size_l1, 
  int size_l2, 
  int size_l3
);

#endif