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

### Prática (sem resposta)

1. Escreva um programa que lê inteiros da entrada e saída e guarda os mesmos em um
   `std::vector`.
1. Após ler uma certa quantidade de elementos, faça seu programa receber uma entrada
   do usuário e imprima `sim` caso esta entrada esteja no `std::vector`.
1. Escreva uma classe `Pedido` que deve guardar: (1) o nome do usuário que fez o pedido
   e (2) um `std::vector` de outra classe, chamada `Produto`. A classe `Produto` por sua
   vez deve conter o nome e preço de cada produto. Na classe pedido, implemente três
   métodos. Um para inserir um novo produto, outro para desfazer a última inserção
   (apagar a última inserção do vector), e um para imprimir todos os produtos do pedido.

## Set

### Perguntas teóricas

**O que aconteceria se, em um `std::set` de strings, eu inserisse a string "Jack" duas vezes?**
<details><summary>Resposta</summary>
Um `std::set` não deve ser usado para inserir valores não exclusivos. Assim, a implementação
da classe std::`std::set` não permitiria a inserção do segundo valor.
</details>

**No exemplo anterior, se eu quisesse ter duas instâncias de "Jack", o que
eu mudaria?**
<details><summary>Resposta</summary>
Por padrão, um `std::set` contém apenas valores únicos. Você precisaria mudar
sua seleção do container para um `std::multiset` (não discutido em aula) ou
um `std::vector`.
</details>

**Encontrei um elemento no `std::set` usando a função `find`. Agora, tenho um iterador
apontando para o elemto. Eu poderia usar este iterador para alterar o valor apontado?**
<details><summary>Resposta</summary>
Não. Iteradores são constantes (ou deveriam ser, algumas versões de C++ alteram isso)
</details>

### Código

1. Faça um programa simples que mostra que o `std::set` não suporta
   elementos repetidos.
1. Usando um `std::set`, faça uma função com a seguinte assinatura:
   ```cpp
   std::set intersecao(int *dados_1, unsigned int n_dados_1,
                       int *dados_2, unsigned int n_dados_2);
   ```
   Em outras palavras, uma função que computa a interseção de dois
   vetores (aqui representados como ponteiros).
1. Usando um `std::set` resolva o seguinte problema. Implemente uma
   função que recebe um `std::vector` e um parâmetro `k`. Tal
   função deve retornar um número de sub-vetores do parâmetro `dados`
   que somam `k`.
   ```cpp
   unsigned int num_sub_soma(std::vector<unsigned int> dados, int k);
   ```
   Exemplo:
   ```
   Entrada: dados = [1,1,1], k = 2
   Saída: 2

   Entrada: nums = [1,2,3], k = 3
   Saída: 2
   ```

   Lembre-se que o `std::set` é bom para busca. Se `k=3` no caso acima,
   qual elemento preciso somar a `dados[0]` para que `dados[0] + x == 3`?

## Mapa

### Perguntas teóricas

**Qual é o comportamento esperado ao inserir um elemento no mapa duas vezes?**
<details><summary>Resposta</summary>
Um mapa só pode ter uma chave. Então, ao inserir novamente a chave é trocada!
</details>

**Suponha que eu tenho um `std::map<int, Pessoa>` que guarda uma pessoa
  para cada CPF. Como que você altera o nome da Pessoa sem remover a mesma
  do mapa?**
<details><summary>Resposta</summary>
O método find retorna um ponteiro para a Pessoa dentro do mapa.
</details>