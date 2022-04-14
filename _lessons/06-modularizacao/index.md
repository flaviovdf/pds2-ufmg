---
layout: page
title: Modularização
has_children: true
has_toc: false
description: Modularização
---

# Modularização
{: .no_toc .mb-2 }

❤️ Arquivos `.h` (ou `.hpp`)
{: .fs-6 .fw-300 }

---

# Lembrando do nosso objetivo

## Com TADs queremos que o resto do programa seja cliente. Apenas use as operações do mesmo.

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/02-tads-fig0.png)

---

# Antes de tudo

## Vamos entender um pouco como organizar um código

1. Todos os nossos arquivos `.cpp` vão ficar na pasta `src`
    - `src` é *source* ou *fontes*; aqui moram os arquivos fontes.  
1. Vamos criar arquivos `.h` para definir o contrato do TAD
1. Os arquivos `.h` moram na pasta `include` (inclua isso)
1. Por um `Makefile` vai compilar tudo

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig0.png)

---

# “Agrupar para conquistar”

## Juntar elementos inter-relacionados

1. Manutenção, compreensão, ...
    - Aspectos da funcionalidade do programa
1. Programação modular
    - Partes independentes e intercambiáveis

---

# Módulo

1. Propósito único
1. Interface apropriada com outros módulos
    - Pode ser compilado separadamente
    - Reutilizáveis e Modificáveis

---

# Compilação

1. Grandes sistemas
    - Equipes de programadores
    - Código distribuído em vários arquivos fonte

## Não é conveniente recompilar partes (todo) do programa que não foram alteradas

1. Princípio do encapsulamento
    - Separar a especificação de como a classe é usada dos detalhes de como é implementada

---

# Um exemplo

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



