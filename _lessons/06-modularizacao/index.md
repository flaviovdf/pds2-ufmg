---
layout: page
title: Modularização
has_children: true
has_toc: false
description: Modularização
nav_order: 6
---

# Modularização
{: .no_toc .mb-2 }

❤️ Arquivos `.h` (ou `.hpp`)
{: .fs-6 .fw-300 }

---

# Lembrando do nosso objetivo

1. Com TADs queremos que o resto do programa seja cliente
1. Apenas use as operações do mesmo.

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/02-tads-fig0.png)

---

# Antes de tudo

## Vamos entender um pouco como organizar um código

1. Todos os nossos arquivos `.cpp` vão ficar na pasta `src`
    - `src` é *source* ou *fontes*: aqui moram os arquivos fontes.
1. Vamos criar arquivos `.h` para definir o contrato do TAD
1. Os arquivos `.h` moram na pasta `include` (inclua isso)
1. Por um `Makefile` vai compilar tudo


```
. project
├── Makefile
├── build
│  └── [objects]
├── include
│  └── ponto.h
│  └── retangulo.h
└── src
│  └── ponto.cpp
│  └── retangulo.cpp

```

---

## E estes arquivos .h?

Lembre-se que TADs são contratos. Os arquivos `.h` é a
forma que C/C++ tem de separar o contrato da implementação.

Observe o exemplo de `ponto.h` abaixo:

```cpp
#ifndef PDS2_PONTO_H
#define PDS2_PONTO_H

/*
 * Representa um ponto em duas dimensões. Não faz muito
 * mais do que isso :-)
 */
class Ponto {
  private:
    double _x;
    double _y;
  public:
    /*
     * @brief Constutor do nosso ponto.
     */
    Public(double x, double y);

    /*
     * @brief Retorna o valor na coordenada x
     */
    double get_x();

    /*
     * @brief Retorna o valor na coordenada y
     */
    double get_y();
};
#endif
```

---

# Vamos por partes

## Include Guards

Observe que o arquivo começa e termina com:

```cpp
#ifndef PDS2_PONTO_H
#define PDS2_PONTO_H

// ...

#endif
```

Essas três chamadas são conhecidas como "include guards".
Tais linhas evitam bugs (ver
[aqui](https://en.wikipedia.org/wiki/Include_guard) na hora
de fazermos uso dos nossos arquivos `.h`

Vou falar mais de erros depois.

---

# Definições

## Em segundo lugar, observe que temos só o contrato

```cpp
/*
 * Representa um ponto em duas dimensões. Não faz muito
 * mais do que isso :-)
 */
class Ponto {
  private:
    double _x;
    double _y;
  public:
    /*
     * @brief Constutor do nosso ponto.
     * /
    Public(double x, double y);

    /*
     * @brief Retorna o valor na coordenada x
     */
    double get_x();

    /*
     * @brief Retorna o valor na coordenada y
     */
    double get_y();
};
```

1. Observe que todos os métodos não tem comportamento
   nenhum.
1. Além disso, todos estão documentados. Não é obrigatório
   mas é uma boa prática.
1. Assim qualquer pessoa que vai usar nosso código consegue
   entender quais são os contratos!

---

# Motivos de modularizar: “Agrupar para conquistar”

## Juntar elementos inter-relacionados

1. Manutenção, compreensão, ...
    - Aspectos da funcionalidade do programa
1. Programação modular
    - Partes independentes e intercambiáveis

---

# Motivos de modularizar: “Agrupar para conquistar”
## Módulo

1. Propósito único
1. Interface apropriada com outros módulos
    - Pode ser compilado separadamente
    - Reutilizáveis e Modificáveis

---

# Projeto Modular
## Propriedades

1. Decomposição
1. Composição
1. Significado fechado
1. Continuidade
1. Proteção

---

# Decomposição

1. Nível de Projeto
    - Capaz de separar uma tarefa em subtarefas, que podem ser abordadas separadamente
1. Nível de Software
    - Capaz de trabalhar em cada um dos módulos do software independente do outros módulos
1. O que pode prejudicar a decomposição?

---

# Composição

1. Capacidade de conseguir combinar de forma livre diferentes elementos de software

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig0.png)

---

# Continuidade


1. Alterações em parte da especificação demandam alterações em poucos módulos
   - Bom exemplo
1. Utilização de constantes
   - Mau exemplo
1. Dependência forte de um único módulo

---

# Proteção

1. Situações anormais em tempo de execução não são propagadas para outros módulos
    - Erros não detectados em outras partes
1. Extensibilidade
    - Validação dos dados nos módulos
    - Tipos, asserções, exceções

---

# Compilação

1. Grandes sistemas
    - Equipes de programadores
    - Código distribuído em vários arquivos fonte

## Não é conveniente recompilar partes (todo) do programa que não foram alteradas

1. Princípio do encapsulamento
    - Separar a especificação de como a classe é usada dos detalhes de como é implementada

---

# Compilacao

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig1.png)

---

# Um exemplo

---

# Uma visão abstrata do processo

1. Cada passa gera código de máquina
1. O linker cola tudo junto

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig2.png)

---

# Makefile

1. Arquivo de texto especialmente formatado para um programa Unix chamado `make`
1. Contém uma lista de requisitos para que um programa seja considerado ‘up to date’

1. O programa make examina esses requisitos
    - verifica os timestamps em todos os arquivos de origem;
    - recompila apenas os arquivos com um registro desatualizado

[Leitura adicional](https://www.gnu.org/software/make/manual/make.html)

[Leitura adicional](https://www.cs.bu.edu/teaching/cpp/writing-makefiles/)

---

# Exemplo Makefile

```make
CC=g++
CFLAGS=-std=c++11 -Wall

all: main

ponto.o: ponto.h ponto.cpp
    ${CC} ${CFLAGS} -c ponto.cpp

main.o: ponto.h main.cpp
    ${CC} ${CFLAGS} -c main.cpp

main: main.o ponto.o
    ${CC} ${CFLAGS} -o main main.o ponto.o

clean:
    rm -f main *.o
```

---

# Exemplo Makefile "Genérico"

1. Copie e cole, funciona em sistemas unix

```make
CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g -Wall -O3 -std=c++14
INC := -I include/ -I third_party/

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)

.PHONY: clean
```

---

# Considerações Finais

- Maior reusabilidade
- Melhoria da legibilidade
- Modificações facilitadas (e mais seguras)
- Maior confiabilidade
- Aumento da produtividade
