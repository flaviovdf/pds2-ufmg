---
layout: default
title: Exercícios para Casa
parent: List, Set e Map
---

# Exercícios para Casa
{: .no_toc .mb-2 }

Para fixar os cont
{: .fs-6 .fw-300 }

---

**Sumário**
1. Tarefas
{:toc}

---

## Vector

### Com respostas

1. Preciso usar um array. Não sei quantos elementos ele precisa conter. Que contêiner STL devo usar?
<details><summary>Resposta</summary>
Um `std::vector` ou um `std::list` são perfeitamente adequados para esse requisito. Ambos gerenciam a memória e podem dimensionar dinamicamente para atender aos requisitos crescentes de um aplicativo.
</summary>
1. Meu aplicativo tem um requisito que envolve buscas frequentes. Que tipo de contêiner devo escolher?
<details><summary>Resposta</summary>
Um contêiner associativo, `std::set` ou `std::map`, são ambos adequados para requisitos que envolvem buscas frequentes.
</summary>
1. Preciso armazenar pares chave-valor para pesquisa rápida. No entanto, a situação pode resultar em várias chaves que não são exclusivas. Que contêiner devo escolher?
<details><summary>Resposta</summary>
Um contêiner associativo do tipo `std::multimap` (não visto em sala) é adequado para esse requisito. Um multimap pode conter pares chave-valor não exclusivos e pode oferecer uma pesquisa rápida característica de contêineres associativos.
</summary>

### Sem respostas

1. Qual seria sua escolha de um contêiner que precisa conter um array de objetos com inserção possível no topo e na parte inferior?
1. Você precisa armazenar elementos para pesquisa rápida. Que contêiner você escolheria?
1. Você precisa armazenar elementos em um std::set, mas ainda ter os critérios de armazenamento e pesquisa alterados com base em condições que não são necessariamente o valor dos elementos. Isso é possível?
1. Qual parte do STL ajuda a conectar algoritmos a contêineres para que os algoritmos possam trabalhar nesses elementos?
