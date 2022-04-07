---
layout: page
title: List, Set e Map
has_children: true
has_toc: false
description: Outros Containers (List, Set e Map)
nav_order: 4
---

# Outros Containers (List, Set e Map)
{: .no_toc .mb-2 }

Ampliando o entendimento de containers via outros TADs comuns
(com Douglas Macharet)
{: .fs-6 .fw-300 }

---

# Até Agora...

## Basicamente fizemos uso de Vector

1. Vamos ampliar para outros `containers`

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig0.png)

---

# Uma visão geral do Vector e dos outros

1. Na memória, o `vector` é um vetor (`array`) mesmo.
1. Apenas **encapsulou-se** o fato do mesmo crescer e reduzir de tamanho
1. Vamos explorar outros Containers e entender, por alto, as diferenças

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig1.png)

---

# List

*A lista é implementada com ponteiros 😱*
```
3 <-> 7 <-> 9 <-> 8
```

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig2.png)


1. Lista duplamente encadeada
1. Não temos mais acesso via índice. Motivo?
    - Não tem um vetor por baixo como o vector
    - Cada "número" guarda ponteiros para quem vem antes e depois
        - É errado dizer que o número guarda os ponteiros, mas estou
          simplificando.
        - Na prática é um struct, vide exemplo abaixo

```cpp
struct node_t {
  int valor;
  node_t *anterior;
  node_t *próximo;
}
```

---

# Detalhes da List

## Observe o uso do iterador para acessar os elementos

```cpp
#include <iostream>
#include <list>

int main() {
  std::list<int> l = {7, 5, 16, 8};

  l.push_front(25);
  l.push_back(13);

  std::list<int>::iterator it = l.begin();
  auto ptr = next(it); // o auto ajuda quando não queremos determinar o tipo
  while (ptr != l.end()) {
    std::cout << *ptr << std::endl;
    ptr = next(ptr);
  }
  return 0;
}
```

---

# Iteradores

1. Geralmente não acessamos elementos usando índices quando usamos uma lista encadeada
    - Pode ser feito, só que é mais lento
1. Uma forma de iterar uma container sem usar índices
1. Todo container da biblioteca padrão oferece as funções `begin()` e `end()`
    - `begin()`: Retorna um iterador pro primeiro element
    - `end()`: Indica o fim do container (último elemento da coleção)
1. Usando um "iterador", podemos dizer: 
    - "me dê o próximo, me dê o próximo, me dê o próximo, ..." até acabar
        - `next(it)` ou `it++`

---

# Iteradores C++

1. Se comportam como ponteiros (😱)
1. `ptr++` anda para frente e 

*As duas chamadas abaixo são equivalentes*

```cpp
std::list<int>::iterator it = l.begin();
auto ptr = next(it);
std::cout << *ptr << std::endl
ptr = next(it);
```

*Aqui usamos aritmética de ponteiros, mas pode fazer com next se achar mais simples*

```cpp
std::list<int>::iterator it = l.begin();
std::cout << *(it++) << std::endl
```

---

# Pequeno Desvio (o auto)

1. No exemplo acima eu fiz uso de um tipo estranho `auto` (?)
1. Na prática, eu estou dizendo: ei C++, sou preguiçoso
    - Digite o tipo para mim
    - Se for possível, será feito
1. O exemplo abaixo funciona pois:
    - `l.begin()` sempre retorna um tipo `std::list<int>::iterator` 
        - Assim o compilador sabe inferir o tipo
    - `next(it)` sempre retorna um ponteiro para um número na lista
        - Assim o compilador sabe inferir o tipo

```cpp
#include <iostream>
#include <list>

int main() {
  std::list<int> l = {7, 5, 16, 8};

  l.push_front(25);
  l.push_back(13);

  auto it = l.begin();
  auto ptr = next(it);
  while (ptr != l.end()) {
    std::cout << *ptr << std::endl;
    ptr = next(ptr);
  }
  return 0;
}
```

---

# List vs Vector

1. Quando queremos uma sequência de elementos, podemos escolher entre vector e list
1. A não ser que tenha um motivo, use vector.
    - desempenho melhor no geral

---

# Containers Associativos (ou Conjutos sem Repetição)

1. Elementos não possuem ordem específica
1. Projetados para suportar o acesso direto aos elementos usando chaves pré-determinadas

1. Chave
    - Usada internamente para guardar em ordem

1. Operações
    - `insert()`
    - `erase()`
    - `find()`
    - `count()`

---

# Set de forma Abstrata

1. Guarda uma coleção de elementos distintos

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig5.png)

---

# Set em C++

1. Dados armazenados (ordenados) em uma *Árvores Binárias de Busca*
  - Já explico
1. Comparáveis de acordo com algum critério
  - Números sempre são comparáveis
  - TADs são mais complexos
    - Tem que usar um *comparator*, explicado mais afrente.

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig3.png)

---

# Exemplo com Set

```cpp
#include <iostream>
#include <set>
 
int main() {
  std::set<int> s; 
  for(int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }

  s.insert(7);
 
  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }
  for(int i = 2; i <= 10; i += 2) {
    s.erase(i);
  }
 
  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }
  return 0;
}
```

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig6.png)


---

# Árvores Binárias de Busca 

## Binary Search Tree -- BST

1. Invariantes:
  - O filho da esquerda é menor ou igual ao nó
  - O filho da direita é maior do que o nó

1. Consequências:
  - Elementos na esquerda são menores
  - Elementos na direita são maiores

```
Pra qualquer nó:
  [ Esquerda ] < [ Nó ] < [ Direita ]

                8
               / \
              /   \
             3    10
            / \     \
           /   \     \
          2     4    15
```

<a href="https://commons.wikimedia.org/wiki/File:Optimal-binary-search-tree-from-sorted-array.gif">Y.samadzadeh</a>, <a href="https://creativecommons.org/licenses/by-sa/4.0">CC BY-SA 4.0</a>, via Wikimedia Commons

---

# Inserção

## A inserção é feita via um algoritmo recursivo

1. Abaixo temos uma versão simplificada do mesmo
  - Na verdade como estamos evitando ponteiros ao máximo por enquanto, pode ser
    vista como mais complicada :-)
  - Sim, tive que usar ponteiros para esse exemplo, mas sem `new` e `delete`
1. Qual a ideia?
  - Sempre que for menor, tente inserir mais para esquerda
  - Se for maior, mais para a direita
  - Use recursividade para descer na árvore

<a href="https://commons.wikimedia.org/wiki/File:Binary-search-tree-insertion-animation.gif">Y.samadzadeh</a>, <a href="https://creativecommons.org/licenses/by-sa/4.0">CC BY-SA 4.0</a>, via Wikimedia Commons

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=struct%20node_t%20%7B%0A%20%20int%20value%3B%0A%20%20node_t%20*esq%3B%0A%20%20node_t%20*dir%3B%0A%7D%3B%0A%0Avoid%20insere%28node_t%20*raiz,%20node_t%20*novo_no%29%20%7B%0A%20%20if%20%28novo_no-%3Evalue%20%3C%20raiz-%3Evalue%29%20%7B%0A%20%20%20%20if%20%28raiz-%3Eesq%20%3D%3D%20nullptr%29%20%7B%0A%20%20%20%20%20%20raiz-%3Eesq%20%3D%20novo_no%3B%20%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20insere%28raiz-%3Eesq,%20novo_no%29%3B%0A%20%20%20%20%7D%0A%20%20%7D%20else%20if%20%28novo_no-%3Evalue%20%3E%20raiz-%3Evalue%29%20%7B%0A%20%20%20%20if%20%28raiz-%3Edir%20%3D%3D%20nullptr%29%20%7B%0A%20%20%20%20%20%20raiz-%3Edir%20%3D%20novo_no%3B%20%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20insere%28raiz-%3Edir,%20novo_no%29%3B%0A%20%20%20%20%7D%0A%20%20%7D%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20node_t%20no_raiz%20%3D%20%7B7,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no2%20%3D%20%7B15,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no3%20%3D%20%7B16,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no4%20%3D%20%7B5,%20nullptr,%20nullptr%7D%3B%0A%20%20%0A%20%20insere%28%26no_raiz,%20%26no2%29%3B%0A%20%20insere%28%26no_raiz,%20%26no3%29%3B%0A%20%20insere%28%26no_raiz,%20%26no4%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=700&curInstr=0&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# Busca

## A grande vantagem da árvore é buscar mais rápido.

1. Como seria um algoritmo para achar um elemento em um vector?
1. Percorre *TODOS* os elementos até achar.
1. Observe abaixo como a árvore é mais rápida.

<a href="https://commons.wikimedia.org/wiki/File:Binary_search_tree_example.gif">A.gholamzade</a>, <a href="https://creativecommons.org/licenses/by-sa/4.0">CC BY-SA 4.0</a>, via Wikimedia Commons

---

# Map

1. Um mapa armazena pares (chave, valor) chamados itens
    - Chaves e valores podem ser de qualquer tipo
    - Elemento e Valor são sinônimos
1. A chave é utilizada para achar um elemento rapidamente
    - Estruturas especiais são usadas para que a pesquisa seja rápida
1. Diz-se portanto que um mapa "mapeia chaves para valores"
    - O mapa pode ser mantido ordenado ou não (com respeito às chaves)
    - Em C++ implementada como BST
    - Também pode ser uma Tabela Hash
        - Assunto de Estruturas de Dados

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig4.png)

---

# Exemplo Map

1. Observe aqui o iterator mais complicado
1. Tem que me indicar a chave e o valor
1. Acesso com `->` pois se comporta como ponteiro

```cpp
include <iostream>
#include <string>
#include <map>
 
int main() {
  std::map<int,std::string> m;
  m.insert(std::pair<int,std::string>(2017123456, "Joao"));
 
  m[2016123456] = "Maria";
  m[2018123456] = "Carlos";
  m[2015123456] = "Jose";
  m[2014123456] = "Joana";
 
  std::map<int,std::string>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    std::cout << it->first << ": " << it->second << std::endl;
  }
  return 0;
}
``` 

---

# Outros Maps/Sets

1. Por padrão, maps/sets são implementados como árvores binárias de busca
1. Existem versões unordered_*
    - Mais eficazes na prática
1. Porém, não conseguimos ordenar as chaves
1. Iterador em um map/set
    - Sempre em ordem

---

# Comparators

```cpp
// O comparator sempre verificar se é <. Com < podemos criar >, == e != . Note que:
//           p1 < p2   <--> p2 > p1
//           p1 >= p2  <--> !(p1 < p2)
//           p1 == p2  <--> !(p1 < p2) && !(p2 < p1)
//           p1 != p2  <--> !(p1 == p2)
struct compara_pessoa_f {
  bool operator()(const Pessoa& p1, const Pessoa& p2) {
    return p1.get_idade() < p2.get_idade();
  }
};

int main() {
  std::set<Pessoa, compara_pessoa_f> pessoas;
  pessoas.insert(Pessoa("Ana", 18));
  pessoas.insert(Pessoa("Pedro", 19));
  pessoas.insert(Pessoa("Ana", 18));

  for (Pessoa p : pessoas)
    std::cout << p.get_nome() << std::endl;

  return 0;
}
```

---

# Por fim...

