---
layout: default
title: Exercícios para Casa
parent: Prática de Containers
---

# Exercícios para Casa
{: .no_toc .mb-2 }

Algumas perguntas mais avançadas sobre contêiners.
{: .fs-6 .fw-300 }

---

## Vector

### Perguntas Teóricas

**Em algum momento, `std::vector` vai alterar a ordem dos elementos serem inseridos?**
<details><summary>Resposta</summary>
Não, o `std::vector` é um contêiner sequencial e os elementos são armazenados e acessados na mesma ordem em que são inseridos.
</details>

**Qual função é usada para inserir itens em um `std::vector` e onde o objeto é inserido?**
<details><summary>Resposta</summary>
O método `push_back()` insere elementos no final do vetor.
</details>

**Qual função obtém o número de elementos armazenados em um `std::vector`?**
<details><summary>Resposta</summary>
O método `size()` retorna o número de elementos armazenados em um vetor. A propósito, isso é verdade para todos os contêiners da STL.
</details>

### Prática

1. Escreva um programa que lê inteiros da entrada e saída e guarda os mesmos em um
   `std::vector`.
1. Após ler uma certa quantidade de elementos, faça seu programa receber uma entrada
   do usuário e imprima `sim` caso esta entrada esteja no `std::vector`.
1. Escreva uma classe `Pedido` que deve guardar: (1) o nome do usuário que fez o pedido
   e (2) um `std::vector` de outra classe, chamada `Produto`. A classe `Produto` por sua
   vez deve conter o nome e preço de cada produto. Na classe pedido, implemente três
   métodos. Um para inserir um novo produto, outro para desfazer a última inserção
   (apagar a última inserção do vector), e um para imprimir todos os produtos do pedido.

### Set

Q How would I declare a set of integers to be sorted and stored in order of
descending magnitude?
A set <int> defines a set of integers. This takes the default sort predicate
std::less <T> to sort items in order of ascending magnitude, and can also be
expressed as set <int, less <int> >. To sort in order of descending magnitude,
define the set as set <int, greater <int> >.
Q What would happen if, in a set of strings, I inserted the string “Jack” twice?
A A set is not meant to be used to insert nonunique values. So, the implementation
of the std::set class would not allow insertion of the second value.
Q In the preceding example, if I wanted to have two instances of “Jack”, what
would I change?
A By design, a set holds only unique values. You would need to change your selec-
tion of container to a multiset.
Q What multiset member function returns the count of items of a particular
value in the container?
A count (value) is the function of interest.
Q I have found an element in the set using the find function and have an iterator
pointing to it. Would I use this iterator to change the value being pointed to?
A No. Some STL implementations might allow the user to change the value of an
element inside a set via an iterator returned by, for example, find. However, this
is not the correct thing to do. An iterator to an element in the set should be used as
a const iterator—even when the STL implementation has not enforced it as such.
Workshop
The Workshop contains quiz questions to help solidify your understanding of the mater-
ial covered and exercises to provide you with experience in using what you’ve learned.
Try to answer the quiz and exercise questions before checking the answers in Appendix
D, and be certain you understand the answers before going to the next lesson.
Quiz
1. You declare a set of integers as set <int>. What function supplies the sort criteria?
2. Where would you find duplicate elements in a multiset?
3. What set or multiset function supplies the number of elements in the container?
530 LESSON 20: STL set and multiset
Exercises
1. Extend the telephone directory example in this lesson to find a person’s name
given a phone number, without changing structure ContactItem. (Hint: Define the
set with a binary predicate that sorts items in accordance with the number, thus
overriding the default sort based on the < operator.)
2. Define a multiset to store words and their meanings; that is, make a multiset
work as a dictionary. (Hint: The multiset should be one of a structure that con-
tains two strings: the word and its meaning.)
3. Demonstrate via a simple program that a set cannot accept duplicate entries,
whereas a multiset can
                                                     
How would I declare a map of integers to be sorted / stored in order of
descending magnitude?
A map <int> defines a map of integers. This takes the default sort predicate
std::less <T> to sort items in order of ascending magnitude, and can also be
expressed as map <int, less <int> >. To sort in order of descending magnitude,
define the map as map <int, greater <int> >.
Q What would happen if in a map of strings I inserted the string Jack twice?
A A map is not meant to be used to insert nonunique values. So, the implementation
of the std::map class will not allow insertion of the second value.
Q&A 547
21
Q In the above example, if I wished to have two instances of Jack, what would
you change?
A A map by design holds only unique values. You would need to change your selec-
tion of container to a multimap.
Q What multimap member function returns the count of items of a particular
value in the container?
A count (value) is the function of interest.
Q I have found an element in the map using the ‘find’ function and have an
iterator pointing to it. Would I use this iterator to change the value being
pointed to?
A No. Some STL implementations may allow the user to change the value of an ele-
ment inside a map via an iterator returned by say ‘find’. This however is not the
correct thing to do. An iterator to an element in the map should be used as a ‘const’
iterator—even when the STL implementation has not enforced it as such.
Workshop
The Workshop contains quiz questions to help solidify your understanding of the mater-
ial covered and exercises to provide you with experience in using what you’ve learned.
Try to answer the quiz and exercise questions before checking the answers in Appendix
D, and be certain you understand the answers before going to the next lesson.
Quiz
1. If you declare a map of integers as map <int>, what function supplies the sort
criteria?
2. Where would you find duplicate elements in a multimap?
3. What map or multimap function supplies the number of elements in the container?
4. Where would you find duplicate elements in a map?
Exercises
1. You need to write an application that works as a telephone directory where the
name of the people need not be unique. What container would you choose? Write a
definition of the container.
548 LESSON 21: STL map and multimap
2. The following is a map template definition in your dictionary application:
map <wordProperty, string, fPredicate> mapWordDefinition;
where word is the structure
struct wordProperty
{
string strWord;
bool bIsFromLatin;
};
Define the binary predicate fPredicate that will help the map sort a key of type
wordProperty according to the string attribute it contains.
3. Demonstrate via a simple program that a map cannot accept duplicate entries,
whereas a multimap can
