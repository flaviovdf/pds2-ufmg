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
{: .fs-6 .fw-300 }

---

# List

Lista duplamente encadeada
Não temos mais acesso via índice. Motivo?
Iterador para acessar os elementos

# Iteradores

---

# Containers Associativos

Elementos não possuem ordem específica
Projetados para suportar o acesso direto aos elementos usando chaves pré-determinadas
Chave
Usada internamente para guardar em ordem
Operações
insert(), erase()
find(), count()


---

# Set

Guarda uma coleção de elementos distintos
Dados armazenados (ordenados) em uma BST
Comparáveis de acordo com algum critério

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

