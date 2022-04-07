---
layout: page
title: List, Set e Map
has_children: true
has_toc: false
description: Outros Containers (List, Set e Map)
---

# Outros Containers (List, Set e Map)
{: .no_toc .mb-2 }

Ampliando o entendimento de containers via outros TADs comuns
(com Douglas Macharet)
{: .fs-6 .fw-300 }

---

# Até Agora...

## Basicamente fizemos uso de `vector` e `string`

1. Vamos ampliar para outros `containers`

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig0.png)

---

# Uma visão geral do `vector` e dos outros

1. Na memória, o `vector` é um vetor (`array`) mesmo.
1. Apenas **encapsulou-se** o fato do mesmo crescer e reduzir de tamanho
1. Vamos explorar outros Containers e entender, por alto, as diferenças

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig1.png)

---

# List

1. Lista duplamente encadeada
1. Não temos mais acesso via índice. Motivo?
1. Iterador para acessar os elementos

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig2.png)

---

# Iteradores

---

# Containers Associativos

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

# Set

1. Guarda uma coleção de elementos distintos
1. Dados armazenados (ordenados) em uma *Árvores Binárias de Busca*
  - Já explico
1. Comparáveis de acordo com algum critério
  - Números sempre são comparáveis
  - TADs são mais complexos
    - Tem que usar um *comparator*, explicado mais afrente.

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig3.png)

---

# Árvores Binárias de Busca (Binary Search Tree -- BST)

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

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=struct%20node_t%20%7B%0A%20%20int%20value%3B%0A%20%20node_t%20*esq%3B%0A%20%20node_t%20*dir%3B%0A%7D%3B%0A%0Avoid%20insere%28node_t%20*raiz,%20node_t%20*novo_no%29%20%7B%0A%20%20if%20%28novo_no-%3Evalue%20%3C%20raiz-%3Evalue%29%20%7B%0A%20%20%20%20if%20%28raiz-%3Eesq%20%3D%3D%20nullptr%29%20%7B%0A%20%20%20%20%20%20raiz-%3Eesq%20%3D%20novo_no%3B%20%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20insere%28raiz-%3Eesq,%20novo_no%29%3B%0A%20%20%20%20%7D%0A%20%20%7D%20else%20if%20%28novo_no-%3Evalue%20%3E%20raiz-%3Evalue%29%20%7B%0A%20%20%20%20if%20%28raiz-%3Edir%20%3D%3D%20nullptr%29%20%7B%0A%20%20%20%20%20%20raiz-%3Edir%20%3D%20novo_no%3B%20%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20insere%28raiz-%3Edir,%20novo_no%29%3B%0A%20%20%20%20%7D%0A%20%20%7D%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20node_t%20no_raiz%20%3D%20%7B7,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no2%20%3D%20%7B15,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no3%20%3D%20%7B16,%20nullptr,%20nullptr%7D%3B%0A%20%20node_t%20no4%20%3D%20%7B5,%20nullptr,%20nullptr%7D%3B%0A%20%20%0A%20%20insere%28%26no_raiz,%20%26no2%29%3B%0A%20%20insere%28%26no_raiz,%20%26no3%29%3B%0A%20%20insere%28%26no_raiz,%20%26no4%29%3B%0A%20%20%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=36&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# Busca

## A grande vantagem da árvore é buscar mais rápido.

1. Como seria um algoritmo para achar um elemento em um vector?
1. Percorre *TODOS* os elementos até achar.
1. Observe abaixo como a árvore é mais rápida.

<a href="https://commons.wikimedia.org/wiki/File:Binary_search_tree_example.gif">A.gholamzade</a>, <a href="https://creativecommons.org/licenses/by-sa/4.0">CC BY-SA 4.0</a>, via Wikimedia Commons

---

# Map

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/04-stl-fig4.png)

---

Por padrão, maps/sets são implementados como árvores binárias de busca
Existem versões unordered_*
Mais eficazes na prática
Porém, não conseguimos ordenar as chaves
Iterador em um map/set
Sempre em ordem

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
}```

