---
layout: page
title: Vector
has_children: true
has_toc: false
description: Entendendo o TAD Vector
---

# Apresentação
{: .no_toc .mb-2 }

Iniciando o uso de TADs da Biblioteca STL (com Douglas Macharet)
{: .fs-6 .fw-300 }

---

# Quais exemplos de TADs já vimos?

1. Ponto, Aluno, Matriz etc.
1. Será que existem quantos outros TADs?
    - Infinitos! Você pode definir os seus próprios!
    - Sempre vou ter que implementá-los?
    - Não!
1. Bibliotecas to the rescue!
1. Porém apenas para problemas gerais o suficiente.
    - Não faz sentido C++ ter um TAD `AlunoUFMG`.

---

# Bibliotecas

## Quase nenhum programa é escrito em linguagem de programação a partir do zero

1. Autocontida, reutilizável e substituível
1. Importadas em múltiplas aplicações
1. Você não precisa entendê-las completamente
    - Embora vamos nos aprofundar um pouco em aulas futuras
1. Saber utilizar é o principal inicialmente!

---

# Reutilização

1. Aplicado no dia-a-dia em vários contextos
1. Maximizar o uso de software pré-existente
1. Tempo é dinheiro!
    - Por que reinventar a roda a todo momento?

1. Tipos de reutilização
    - Objetos e Funções
    - Componentes
    - Sistemas
1. Relativo ao aproveitamento de soluções para problemas similares.

1. Reúso de software é o processo de incorporar produtos existentes em um novo produto.

---

# Benefícios

1. Aumento da Produtividade;
1. Diminuição do tempo de desenvolvimento e validação 🡪 Redução de custo;
1. Qualidade dos Produtos;
1. Flexibilidade na estrutura do software;
1. Manutenibilidade;
1. Familiaridade com o uso de padrões leva a menos erros.

---

# Bibliotecas vs. Frameworks

## Bibliotecas

*é uma coleção de implementações de comportamentos escritos em uma linguagem e
importadas no seu código. Nesse caso, há uma interface bem definida para cada
comportamento invocado. Um bom exemplo é a biblioteca jQuery que implementa
certos comportamentos, como por exemplo, a manipulação do HTML.*

1. Disponibiliza funcionalidades comuns
    - Conversão, comunicação, TADs, ...

## Frameworks

*estrutura real, ou conceitual, que visa servir como suporte (ou guia) para a
construção de algo (um produto, por exemplo). “Este algo” herdará as
características desta estrutura, implementando o produto final (“algo”).*

1. Pedaços de aplicações (incompletos)
    - Um sistema é implementado pela adição de componentes para preencher
      lacunas

[Leitura Adicional 01](http://blog.cedrotech.com/api-bibliotecas-e-frameworks-entenda-diferenca-entre-eles/)
[Leitura Adicional 02](https://becode.com.br/framework-biblioteca-api-entenda-as-diferencas/)

---

# Biblioteca padrão C++

1. Classes, funções e variáveis escritas na linguagem para facilitar o desenvolvimento

1. Componentes
    - Strings (expressões regulares)
    - Ponteiros inteligentes (unique_ptr, shared_ptr)
    - Entrada/Saída (streams)
    - Funcionalidades numéricas
    - **Containers (STL)**
        - Nosso foco hoje

---

# Namespaces

```cpp
using namespace std;
```

Um espaço de nomes ("namespace" em inglês) é um delimitador abstrato
(container) que fornece um contexto para os itens que ele armazena (nomes,
termos técnicos, conceitos...), o que permite uma desambiguação para itens que
possuem o mesmo nome mas que residem em espaços de nomes diferentes.

Em várias linguagens de programação, um espaço de nomes é um contexto para
identificadores. Um espaço de nomes não pode possuir duas funções ou variáveis
com o mesmo nome.

Em C++, um espaço de nomes é declarado através de um bloco. Para utilizar um
identificador de um espaço de nomes em outro, deve-se especificar o prefixo do
identificador, isto é, o caminho em profundidade desde o espaço de nomes global
até o espaço de nomes o qual o identificador pertence (separados por ::).

A biblioteca padrão é definida em um namespace chamado std. Para usar as
funcionalidades, o prefixo std:: é usado:

```cpp
std::string gato = "O gato miou.";
std::vector<std::string> palavras = {"gato","pi"};
```

---

# Funcionalidades através de headers

```cpp
#include <string>
#include <iostream>
```

## Exemplo 1 (Sem Namespace)

```cpp
#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

## Exemplo 2 (Com Namespace)

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!" << endl;
    return 0;
}
```

**Geralmente não é uma boa prática carregar todos os nomes de um namespace no
namespace global.**

---

# Parte da ISO C++ Standard Library

1. Economia de tempo e esforço
1. Componentes bem escritos e bem testados
1. Soluções para problemas de programação que envolvem estruturas de dados

- Componentes
    - Containers
    - Iteradores
    - Algoritmos

**Entre os problemas encontrados no desenvolvimento de aplicações que usam
estruturas de dados, destacam-se:**
- ordenar os elementos de uma lista;
- efetuar uma pesquisa eficiente em um vetor;
- gerenciar a memória quando da inserção ou eliminação de elementos.

*Problemas gerais o suficientes para terem TADs padrões*

---

# Standard Template Library (STL)

## Programação Genérica

1. A mesma definição de função atua da mesma forma sobre objetos de diferentes
   tipos
1. Polimorfismo universal – Paramétrico
1. Os tipos são passados como parâmetros

```cpp
std::vector<Tipo>
```

1. Observe o `Tipo`

```cpp
std::vector<int>
std::vector<std::string>
std::vector<Aluno>
std::vector<Conta>
```
---

# Programação Genérica

1. Código que pode ser reutilizado por classes em diferentes hierarquias de
   acordo com o tipo
    - Templates (C++)
    - Generics (Java)

1. Reusabilidade
    - Um dos princípios fundamentais de POO
1. Polimorfismo
    - Restrito à uma única hierarquia de classes
1. Generics
    - Código que pode ser reutilizado por classes em diferentes hierarquias de
      acordo com o tipo

**Não vamos nos preocupar tanto em como implementar, sim como fazer uso.**

---

# Containers

## Estruturas de dados que armazenam valores

1. Todos elementos são do mesmo tipo
1. Básicos ou definidos pelo programador (TADs)
1. Praticamente todas os TADs são containers
1. Tipos específicos (estrutura rígida)
1. Tipos genéricos (podem ser reutilizados)

**A maioria dos programas envolve criar coleções de valores e então
manipulá-los.**

---

# Contratos

## Lembrem-se que TADs definem contratos

1. Acesso uniforme aos dados (contrato)
1. Independente de como está armazenado
1. Independente do tipo
1. Recuperação dos dados
    - Índice (N-ésimo elemento)
    - Valor (Elemento com valor “João”)
1. Propriedades (Elemento com “idade > 18”)
1. Operações
    - Adicionar, remover, ordenar, buscar, ...

---

# Organização dos Dados

## Não é problema seu, mas é bom entender para fazer melhor uso.

1. Acesso rápido, exibição, ...
1. Implementação
    - Correta, eficiente, documentação, ...

*A maioria dos programas envolve criar coleções de valores e então
manipulá-los.*

---

# Contêineres Comuns

## Basicamente TADs que guardam coisas

1. Sequenciais
    - Vector
    - Deque
    - List

1. Associativos
    - Set
    - Map
    - Multiset
    - Multimap

1. Adaptadores
    - Stack
    - Queue
    - Priority queue

*Contêineres de sequência mantém a ordem dos elementos inseridos que você
especificar.*

Em contêineres associativos, os elementos são inseridos em uma ordem
predefinida — por exemplo, como classificada em ordem crescente. Os contêineres
associativos desordenados também estão disponíveis. Os contêineres associativos
podem ser agrupados em dois subconjuntos: mapas e conjuntos.

Um adaptador de contêiner é uma variação de uma sequência ou um contêiner
associativo que restringe a interface para simplicidade e maior clareza.
Adaptadores de contêiner não dão suporte a iteradores.

*Nem sempre o mesmo container é o melhor para diferentes problemas!*

---

# Alocação de memória

1. Vector
    - Contígua
1. List
    - Node-wise
1. Set
    - Árvore binária
1. Map
    - Árvore binária

*Vamos nos aprofundar mais nesses termos em aulas futuras*

---

# Containers - Sequenciais

## Nosso foco dessa aula

1. Elementos estão em uma ordem linear
1. Cada elemento é precedido por um elemento específico e seguido por outro
1. Gerenciamento automático de memória que permite o tamanho variar dinamicamente

1. Operações
    - `front()`
    - `back()`
    - `push_back()`
    - `pop_back()`
    - `size()`
    - `empty()`

1. Alguns contratos:
    - `push_front():` Insert element at the front.
    - `pop_front():` Remove first element.
    - `size():` Returns the number of elements.
    - `empty():` Returns true if the sequence is empty.

---

# Vector

## Modela um array genérico e dinamicamente redimensionável de elementos


1. Vantagens
    - Acesso individual aos elementos (índice)
    - Adição/remoção de elementos no final
    - Percorrer em uma ordem específica
    - [Leia a API](https://en.cppreference.com/w/cpp/container/vector)

1. Um dos containers mais úteis é o vector
1. Um vector é uma sequência de elementos
1. Por baixo é uma lista com array

---

# Exemplos

## Inserção Percorrendo

```cpp
#include <iostream>
#include <vector>

int main() {

  std::vector<int> v = {7, 5, 16, 8};

  v.push_back(25);
  v.push_back(13);

  for(int n : v) {
    std::cout << n << std::endl;
  }

  return 0;
}
```

---

# Tipos de Laços

## Clássico
```cpp
std::vector<int> dados = {0, 7, 8, 1, 3};
for (int i = 0; i < dados.size(); i++)
  std::cout << dados[i];
```

## Compacto (For-Each)
```cpp
for (int x : dados)
  std::cout << x;
```

---

# Exemplos

## Um Vector de Outro TAD

```cpp
#include <string>

class Pessoa {
private:
  std::string _nome;
  int _idade;

public:
  Pessoa(std::string nome, int idade) {
    _nome = nome;
    _idade = idade;
  }

  std::string get_nome() {
    return _nome;
  }

  int get_idade() {
    return _idade;
  }
};
```

*Nosso main**
```cpp
#include <iostream>
#include <string>
#include <vector>

class Pessoa {
private:
  std::string _nome;
  int _idade;

public:
  Pessoa(std::string nome, int idade) {
    _nome = nome;
    _idade = idade;
  }

  std::string get_nome() {
    return _nome;
  }

  int get_idade() {
    return _idade;
  }
};


int main() {
  std::vector<Pessoa> pessoas;
  pessoas.push_back(Pessoa("Ana", 18));
  pessoas.push_back(Pessoa("Pedro", 19));

  // Primeira forma de acesso
  std::cout << pessoas[0].get_nome() << std::endl;
  std::cout << pessoas[1].get_nome() << std::endl;

  // Segunda forma, com at
  std::cout << pessoas.at(0).get_nome() << std::endl;
  std::cout << pessoas.at(1).get_nome() << std::endl;
  return 0;
}
```
