---
layout: page
title: Depuração
has_children: true
has_toc: false
description: Depuração
nav_order: 11
---

# Depuração
{: .no_toc .mb-2 }

Entendendo como usar o GDB
{: .fs-6 .fw-300 }

---

# Slides

## Por enquanto, fazer uso dos slides abaixo:

[Slides](https://docs.google.com/presentation/d/1Lk1-yu9tzvXGvZQEuCnRKyJoapGwud34cUxAmnMv734)

---

# Passo a passo

## Compilação

Compile seu código com -g

```
g++ -g arquivo.cpp -o main
```

---

## Valgrind (WSL/Linux/Mac)


  1. http://cs.ecs.baylor.edu/~donahoo/tools/valgrind/
  1. http://pages.cs.wisc.edu/~bart/537/valgrind.html

```
valgrind --leak-check=full --track-origins=yes --show-reachable=yes --track-fds=yes ./meu_programa
```

Explicando cada comando:
```
--leak-check=full     # Procura leaks
--track-origins=yes   # Procura qual local do código alocou o leak
--show-reachable=yes  # Mostra quais elementos estão leaking
--track-fds=yes       # Mostra quais arquivos ainda estão abertos
```

---

## DrMemory (Mac/Windows)

Alternativa ao valgrind para Windows (sem WSL). Ao instalar o doctor memory e
utilizar pela primeira vez, existe a possibilidade de surgir uma mensagem de erro
de acordo com a sua versão do Windows. Leia a mensagem com cuidado, a mesma tem
instruções de como baixar um arquivo que faz o doctor memory funcionar.

  1. http://www.drmemory.org/
  1. http://www.burningcutlery.com/derek/docs/drmem-CGO11.pdf

```
drmemory -check_uninitialized -check_leaks -results_to_stderr -show_reachable -fetch_symbols -- ./meu_programa
```

---

## Exemplos

Compile os códigos abaixo e teste os mesmos no DrMemory ou Valgrind.

*Primeiro Exemplo: Illegal Read*

Dois problemas aqui:

  1. Lendo na posição errada
  2. Sem free!

```cpp
void f(void) {
  int *x = new int[10];
  x[10] = 0;
}

int main() {
 f();
 return 0;
}
```

*Segundo Exemplo: Illegal Free*

Um erro aqui, 2 frees.

```cpp
int main(void) {
  int *data = new int[10];
  delete data[];
  delete data[];
  return 0;
}
```

*Terceiro Exemplo: Acesso para Null*

Dois erros:
   1. Depois de virar null não posso desalocar
   2. Acesso errado

```c
#include <stdlib.h>
int main(void) {
  //Dois erros aqui
  int *data = new int[10];
  data = nullptr;
  data[2] = 20;
  return 0;
}
```

*Quarto Exemplo: Não Inicializado*

```cpp
#include<stdio.h>
int main(void) {
  int x;
  printf("x = %d\n", x);
}
```

Olhem os erros do DrMemory e/ou Valgrid para cada código acima!

## Mac Users

Compilem com `g++ -m32`, dr memory não gosta de 64 bits no mac.
