---
layout: page
title: Modularização (2 aulas)
has_children: true
has_toc: false
description: Modularização (2 aulas)
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
1. Por um `Makefile` vai compilar tudo (vamos falar dele depois!)


```
. project
├── Makefile
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
de fazermos uso dos nossos arquivos `.h`.

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
```

1. Observe que todos os métodos não tem comportamento
   nenhum.
1. Além disso, todos estão documentados. Não é obrigatório
   mas é uma **boa prática**.
1. Assim qualquer pessoa que vai usar nosso código consegue
   entender quais são os contratos!


---

# Vamos fazer o outro contrato

## O módulo retângulo é cliente do módulo ponto

- Observe como o código abaixo inclui o `ponto.h`
- Quando um include é `#include <assim>`
    - Estamos incluindo uma biblioteca do sistema
- Quando é `#include "assim"`
    - Estamos incluindo um arquivo nosso

## O módulo retângulo

```cpp

#include "../include/ponto.h"

/*
 * Um Retângulo pode ser representado com um
 * ponto de origem, uma altura e uma largura.
 * 
 *        largura
 *    ---------------
 *    |             |
 *    |             | altura
 *    |             |
 *    ---------------
 *  (x,y)
 *    origem
 */
class Retangulo {
  private:
    double _x;
    double _y;
  public:
    /*
     * @brief Constutor do nosso ponto.
     */
    Retangulo(Ponto _origem, double altura, double largura);

    /*
     * @brief Pega a área do retângulo
     */
    double get_area();

    /*
     * Testa se dois retângulos tem alguma interseção.
     * parte da premissa que altura e larguras só podem
     * ser positivas!
     *
     * @brief Retorna true se este retângulo tem intersção com
     *        o outro
     */
    bool interseccao(Retangulo outro);
};
```
---

# Caminhos relativos

## Sobre o ../include/ponto.h

Vai parece redundante, mas vai ficar mais claro quando fizer o `.cpp`

- Para entender a linha `#include "../include/ponto.h"`
- Precisamos entender de caminhos relativos
- .. é um caminho para a pasta superior à `include`
- Ou seja, a pasta raiz do projeto
- Dentro dela, naturalmente, existe a pasta `include`
- Se eu saio de uma pasta, e vou para a logo a acima
  a pasta e onde saí existe na logo acima
- Dentro de include existe o arquivo `ponto.h`
- Veja a figura abaixo.

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig-3.png)

- Antes de ver o código vamos entender o motivo pelo qual
  estamos fazendo essa nova organização.
  
---

# “Agrupar para conquistar”

## Juntar elementos inter-relacionados

1. Manutenção, compreensão, ...
    - Aspectos da funcionalidade do programa
1. Programação modular
    - Partes independentes e intercambiáveis
1. Quebrar em módulos permite desenvolver um código
   mais fácil de manter.

---

# Boas Práticas

## O Módulo

1. Tem um propósito único
1. Interface apropriada com outros módulos
    - Pode ser compilado separadamente
    - Reutilizáveis e Modificáveis
1. Geralmente, um único TAD ou um TAD com
   `structs` e `enums` que são apoio ao TAD

## Exemplo 1

Observe como tenho os enums abaixo que serão utilizados
pelo TAD (além de clientes do TAD)

### Arquivo .h

```cpp
#ifndef PDS2_CARTA_H
#define PDS2_CARTA_H

enum num {
  AS, N2, N3, N4, N5, N6, N7, N8, N9, N10, J, Q, K
};

enum naipe {
  COPAS, ESPADAS, OURO, PAUS
};


/*
 * A classe carta cuida de representar
 * uma carta do baralho padrão. Fazemos
 * uso de enums para garantir que nunca
 * seja inválida.
 */
class Carta {
  private:
    num _numero;
    naipe _naipe;
  public:
    /*
     * @brief Constrói uma carta
     */
    Carta(num numero, naipe naipe);

    /*
     * @brief Pega o número
     */
    num get_numero();

    /*
     * @brief Pega o naipe
     */
    naipe get_naipe();
};
#endif
```

## Exemplo 2

```cpp
#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>

struct endereco_t {
  std::string rua,
  std::string bairro,
  std::string cidade
};

/*
 * A classe pessoa serve para associarmos
 * nomes aos endereços.
 */
class Pessoa {
  private:
    endereco_t _endereco;
    std::string _nome;
  public:
    /*
     * @brief Constrói uma pessoa
     */
    Pessoa(std::string nome, std::string pessoa);
    
    // ... Resto da classe aqui
};
#endif
```

---

# Ok, mas e o código?

- O código vai morar na pasta 

## Arquivos .cpp

- Os arquivos .cpp vão guardar a implementação do contrato
- Os mesmos moram na pasta `src`
- Antes de criar os mesmos temos que fazer o include do `.h`
  que criamos antes.

## Exemplo 1

### Arquivo .h

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
```

### Arquivo .cpp

```cpp
#include "../include/ponto.h"

Ponto::Ponto(double x, double y) {
  _x = x;
  _y = y;
}

double Ponto::get_x() {
  return _x;
}

double Ponto::get_y() {
  return _y;
}
```

---

# Como que funciona?

## O include

- A primeira linha é: `#include "../include/ponto.h"`
- Caminhe até a pasta acima de source com .. (já falamos disso ainda agora)
- Na pasta mãe de `src` existe uma pasta `include`
- Lá existe o arquivo 

## Preste atenção em alguns detalhes

- O arquivo `.cpp` é um pouco diferente das
  outras formas que declaramos métodos e funções
- Porém lembre-se, em C++, `::` significa pertence

```cpp
// retorno Classe::nome
double Ponto::get_x()
```

- A linha acima fala que: na classe Ponto, existe
  um método `get_x` que retorna um double.
- Depois de dizer isso você diz: tá aqui o códgo do método

```cpp
double Ponto::get_x() {
  return _x
}
```

## E o construtor?

- Na classe Ponto existe um construtor que não retorna nada
- Afinal, é um construtor
- Tá aqui como ele é implementado

```cpp
Ponto::Ponto(double x, double y) {
  _x = x;
  _y = y;
}
``` 

---

# Mais um exemplo

## Exemplo 2

### Arquivo .h

```cpp
#ifndef PDS2_CARTA_H
#define PDS2_CARTA_H

enum num {
  AS, N2, N3, N4, N5, N6, N7, N8, N9, N10, J, Q, K
};

enum naipe {
  COPAS, ESPADAS, OURO, PAUS
};

/*
 * A classe carta cuida de representar
 * uma carta do baralho padrão. Fazemos
 * uso de enums para garantir que nunca
 * seja inválida.
 */
class Carta {
  private:
    num _numero;
    naipe _naipe;
  public:
    /*
     * @brief Constrói uma carta
     */
    Carta(num numero, naipe naipe);

    /*
     * @brief Pega o número
     */
    num get_numero();

    /*
     * @brief Pega o naipe
     */
    naipe get_naipe();
};
#endif
```

### Arquivo .cpp

```cpp
#include "../include/carta.h"   // Vou implementar esse contrato

Carta::Carta(                   // Na classe Carta tem um construtor
  num numero, naipe naipe
) {
  _numero = numero;
  _naipe = naipe;
}

num Carta::get_numero() {       // Na classe Carta tem um `get_numero` que retorna um num
  return _numero;
}

naipe Carta::get_naipe() {
  return _naipe;
}
```

- Vamos agora falar um pouco das vantagens antes de entrar em mais exemplos

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

# Um exemplo maior

## Como compilar o código?

```bash
g++ src/ponto.cpp src/retangulo.cpp main.cpp -o main
```

- Passamos **TODOS** os arquivos do nosso código para o compilador
- O compilador cuida de compilar cada parte separada

## Exemplos das Cartas no GitHub

- Na pasta abaixo temos um exemplo maior com um arquivo main
- [Exemplo](https://github.com/flaviovdf/pds2-ufmg/tree/master/exemplos/2023_1/aula06/exemplo2)
- Para compilar o mesmo devemos fazer

```bash
g++ src/jogador.cpp src/carta.cpp src/baralho.cpp main.cpp -o main
```

---

# Compilacao

- Na prática o compilador segue o esquema abaixo
- Cada `.cpp` é compilado separadamente
- Depois colamos todos com um `linker`
- Tudo é oculto de você como programador

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig1.png)

---

# Uma visão abstrata do processo

1. Cada passo gera código de máquina
1. O linker cola tudo junto
1. Os arquivos `.h` ajudam a compilar os `.cpp` individualmente
1. O `retangulo.cpp` pode ser compilado sem o `ponto.cpp`
    - Qual o motivo? O `retangulo.cpp` sabe do contrato da `ponto.h`
    - Então eu posso compilar mesmo sem ter o outro pronto
1. Depois o linker cola tudo junto

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/06-mod-fig2.png)

---

# Precisa de .h e .cpp?

## Sobre o processo de compilação

- Compilar código é um processo custoso
- Aqui, por custoso leia-se,lento e que demanda muito uso de CPU (e leitura do disco)
- Compilar partes separadas nos permite realizar o processo em paralelo
    - Algo que não fazemos aqui, mas ok

## Sobre módulos

- Usando `gcc -c` você pode compilar seu módulo e re-utilizar o mesmo
- Se o seu módulo usa `<string>`, não tem motivo para compilar o módulo `<string>`
- Sempre que você usa `gcc -c` você gera um arquivo `.o`. Seu computador é cheio de
  tais arquivos.
    - Ou de arquivos `.so`, `.a`, `.dll` etc.
    - São módulos pré-compilados
- Cada módulo até sabe de outros (através arquivos `.h`) mas foi compilado
  isoladamente.

---

# Como automatizar o processo de compilação?

## Ideia (Sistemas de Build/Construção)

- Compilar código "na mão" é um processo tedioso
- Existem ferramentas para automatizar esse processo
- Pense em um script, um pequeno código de roteiro, que diz:
  estes são os passos para compular este código

## Ferramentas

- Sistemas de build, ou seja de construção, são comuns no processo
  de desenvolvimento de software
- "People love to hate build systems." ([ref])[https://cliutils.gitlab.io/modern-cmake/]
- A grande verdade é que não existe uma ferramenta única para este propósito
    - [Make](https://en.wikipedia.org/wiki/Make_(software))
    - [Cmake](https://cmake.org/)
    - [Premake](https://premake.github.io)
    - [Ninja](https://ninja-build.org/)


---

# Sistema Make

- No nosso curso vamos fazer uso do sistema make
- Caso você use um sistema Linux, como o WSL, já deve ter o make
- Se usa Windows, veja esta pergunta [aqui](https://stackoverflow.com/questions/17710209/how-to-run-make-from-cygwin-environment)
- O comando básico é `make`
- O comando depende de um arquivo chamado de `Makefile`

---

# Makefile

1. Arquivo de texto especialmente formatado para um programa Unix chamado `make`
1. Contém uma lista de requisitos para que um programa seja considerado ‘up to date’
1. O programa make examina esses requisitos
    - verifica os timestamps em todos os arquivos de origem;
    - recompila apenas os arquivos com um registro desatualizado
1. Uma regra no arquivo make tem a seguinte forma:

```make
target: requisitos ; comando
```

1. Como que leio isso?
    1. Para construir o `target`
    2. Eu preciso primeiro construir os requisitos
    3. E depois executar tal comando

---

# Exemplo Makefile (1)

## Arquivo Make

```make
all: main

main:
	g++ src/jogador.cpp src/carta.cpp src/baralho.cpp main.cpp -o meuprograma

clean:
	rm meuprograma
```

1. Aqui, para executar o comando `all` primeiro eu preciso executar `main` (`all: main`)
2. Para executar o `main` eu não preciso de nada
    1. O main executa o comando: `g++ src/jogador.cpp src/carta.cpp src/baralho.cpp main.cpp -o main`
    1. Ou seja, compila o programa
    1. Gera um executável chamado de `meuprograma`
3. Para executar o `clean` eu não preciso de nada
    1.  O clean executa o comando `rm` que apaga um arquivo
    1.  Estou apagamento o arquivo `meuprograma`

## Fazendo uso

- Para compilar seu código, execute o comando `make`

```sh
make
```

- ou 

```sh
make all
```

- Para limpar tudo

```sh
make clean
```

---

# Exemplo Makefile (2)

- Abaixo temos outro Makefile mais complexo
- O mesmo faz uso de variáveis no começo
- Para referenciar umas variável, use `${NOME_DA_VAR}`

## Arquivo

```make
CC=g++
CFLAGS=-std=c++20 -Wall

all: main

ponto.o: include/ponto.h src/ponto.cpp
    ${CC} ${CFLAGS} -c src/ponto.cpp

retangulo.o: ponto.o include/retangulo.h src/retangulo.cpp
    ${CC} ${CFLAGS} -c src/retangulo.cpp

main.o: include/ponto.h src/main.cpp
    ${CC} ${CFLAGS} -c src/main.cpp

main: main.o ponto.o retangulo.o
    ${CC} ${CFLAGS} -o main main.o ponto.o retangulo.o

clean:
    rm -f main *.o
```

## Entendendo

1. O `all: main` depende do main
1. O `main: main.o ponto.o retangulo.o` depende das regras `main.o`, `ponto.o` e `retangulo.o`.
1. A regra `ponto.o: include/ponto.h src/ponto.cpp` depende dos arquivos existirem.
    - Isto é, quando uma dependência no make não é uma regra, o sistema simplesmente verifica se o arquivo existe
    - Aqui `include/ponto.h` e `src/ponto.cpp` são dois arquivos que **tem** que existir para compilar o ponto
    - Faz sentido, são os arquivos que definem o código
1. Para compilar execute: `${CC} ${CFLAGS} -c src/ponto.cpp`, só que `${CC}` é uma variável, qual o valor dela?
    - Basta substituir com a definição no começo do arquivi
1. Ou seja, para compilar execute `g++ -std=c++20 -Wall -c src/ponto.cpp`
1. Dado que: `${CC}` vira `g++` e `${CFLAGS}` vira `-std=c++20 -Wall

---

# Exemplo Makefile "Genérico"

1. Make é um sistema poderoso que permite executar comandos
1. Nosso foco aqui não é passar por todos esses comandos 
1. Possivelmente, um Makefile simples vai ser o suficiente para você na disciplina
1. Porém, e como sou preguiçoso, tenho um Makefile genérico para uma organização de pastas
   da forma abaixo
1. Copie e cole esse make, organize seu código em pastas similares que vai funcionar em sistemas unix

```make
CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g -Wall -O3 -std=c++20
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
