---
layout: home
title: DCC 204
nav_exclude: true
seo:
  type: Course
  name: Programação e Desenvolvimento de Software 2
---

# {{ site.tagline }}
{: .mb-2 }
{{ site.description }}
{: .fs-6 .fw-300 }

{% if site.announcements %}
{{ site.announcements.last }}
[Avisos](announcements.md){: .btn .btn-outline .fs-3 }
{% endif %}

---

## Sumário
{: .no_toc .text-delta }

1. TOC
{:toc}

---

{: .no_toc .mb-2 }


## Ementa

Programação estruturada e linguagem de programação modular. Metodologias de
desenvolvimento de software. Compreensão, corretude e depuração de programas.
Resolução de problemas de forma modular e eficiente.

## Objetivos

O objetivo da disciplina é apresentar técnicas básicas de desenvolvimento,
teste e análise de programas de computador, para a resolução de problemas de
forma eficaz. É esperado que nesta disciplina os alunos desenvolvam seus
primeiros programas de tamanho moderado, motivando a necessidade de uso de boas
práticas de desenvolvimento, fixando os conteúdos abordados através de
atividades práticas. Concluindo o curso, os alunos deverão dominar as técnicas
mais básicas utilizadas no processo de desenvolvimento de software.

## Avaliação

* Provas Teóricas (2 x 15 pts): 30 pontos.
* Atividades práticas (15 – 20): 40 pontos.
* Projeto: 20 pontos.
* Quizzes: 10 pontos.

## TPs

Além dos laboratórios, a disciplina deve contar com um TP. Para fazer o mesmo,
montem grupos de 4 ou 5 pessoas. Tal TP será um projeto de software de
pequeno/médio porte. O importante é que o mesmo aplique os conceitos visto em
aula.

O grupo deve escolher um problema de seu interesse e realizar todo o processo
de desenvolvimento de um sistema de médio porte (análise, projeto e
implementação), aplicando os conceitos e técnicas vistos durante o curso
(modelagem, POO, testes unitários, etc). O programa deve ser feito baseado na
linguagem C++11. Uma lista de sugestões de temas é apresentada abaixo.
Entretanto, o tema é aberto à negociação caso o grupo tenha outra ideia.

1. Batalha RPG
1. Jogo de Magic
1. Jogo de Cartas
   - UNO
   - Poker
   - Truco
1. Sistema de Gerência
   - e-commerce
   - biblioteca
1. Biblioteca de Grafos
1. Indexador de Arquivos
1. Seu Tema!

O desenvolvimento e a entrega deverão ser feitos utilizando o sistema de
controle de versão GitHub. Sugere-se que commits/pushs sejam feitos de maneira
frequente, pelo menos uma vez ao dia. O calendário de atividades do trabalho é
mostrado abaixo:

### Primeira Entrega

A primeira entrega consiste de **User Stories**. As UserStories são  uma  forma
simples de apresentar  osrequisitos  funcionais  desejados  para um determinado
sistema. São  artefatos  de  desenvolvimento  utilizados  principalmente  em
processos baseados em metodologias ágeis. As descrições são intencionalmente
genéricas, dando liberdade ao grupo para decidir detalhes da implementação. O
grupo deverá identificar possíveis funcionalidades interessantes de serem
incorporadas ao sistema e  propor  pelo  menos  **seis**  User  Stories.

1. A primeira entrega de tema + user stories vale 5pts do projeto final.
1. Depois disso, iniciem o trabalho no tema, vamos ter uma entrevista apoós a primeira prova.
1. Até a entrevista, tente criar ao menos um README.md no seu github!

### Segunda Entrega

Repositório com código completo, README.md indicando como compilar e executar o
código.

1. Documentação (3pts).
   1. Detalhamento do projeto.
   1. Doxygen, comentários, endentação.
1. Funcionamento correto (5 pts).
   1. Compila e executa, não apresenta crash, etc.
1. Uso correto das boas práticas e dos conceitos de OO (10 pts).
   1. Abstração, Encapsulamento, Herança e Polimorfismo.
   1. Modularidade e componentes reusáveis.
   1. Tratamento de exceções.
1. Testes de Unidade (3pts).
1. Entrevista (2pts).
1. Participação individual (2pts).
1. Criatividade, extras (+2pts).


## Livros

1. Clean Code: A Handbook of Agile Software Craftsmanship.
   Robert C. Martin.
   Prentice Hall, 2008.

1. Code Complete: A Practical Handbook of Software Construction.
   Steve McConnell.
   Microsoft Press, 2004. 2nd Edition.

1. Effective C++: 55 Specific Ways to Improve Your Programs and Designs.
   Scott Meyers.
   Addison-Wesley Professional, 2005. 3nd Edition.

1. A Tour of C++.
   Bjarne Stroustrup.
   Addison-Wesley Professional, 2013. 1st Edition.


[Slides]: ./slides
[Calendário]: https://docs.google.com/spreadsheets/d/11MYxpYnlMiw1883H1tEswqZc0WmqWHiWXrkSb_WqSN4/edit?usp=sharing
[Ementa]: #ementa
[Objetivos]: #objetivos
[Informes]: #informes
[Avaliação]: #avaliação
[TPs]: #tps
[Bibliografia]: #bibliografia
[Livros]: #livros
