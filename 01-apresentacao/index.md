---
layout: page
title: Apresentação
has_children: true
has_toc: false
description: Apresentação do Curso
---

# Apresentação
{: .no_toc .mb-2 }

Visão Geral do Curso, Introdução C++ e Logística
{: .fs-6 .fw-300 }

---
**Sumário**
1. TOC
{:toc}
---


# Pessoal

## Quem sou eu?

1. Meu nome: Flavio Figueiredo
1. Prédio do DCC (Anexado ao ICEX) sala 4030

---

# Dúvidas?

1. Moodle/Sala de Aula

---

# Introdução ao Curso

## Sobre PDS2

1. PDS2 é um curso voltado ao entendimento de como *modelar* um software
1. Isto complementa o ponto de vista de PDS2
    - Comandos básicos para desenvolver programas
    - Noções de algoritmos
---

# Nossos Objetivos

1. Entender o problema
1. Modelar os dados
1. Codificar a solução

---

# Ementa

1. Programação estruturada e linguagem de programação modular.
1. Metodologias de desenvolvimento de software.
1. Compreensão, corretude e depuração de programas.
1. Resolução de problemas de forma modular e eficiente.

---

# Avaliação

1. 2 Provas (**30 pontos**)
1. 1 VPL por Aula (**40 pontos**)
1. 1 Projeto (**20 pontos**)

Existe também um pequeno Quiz por aula que vocês podem responde no Moodle.
Tais quizzes não valem pontos.

---

# Projeto

1. Tema da sua escolha
1. Temos uma lista de possíveis
1. Grupos de 3/4 alunos
    1. Código no github
1. Repositório privado

---

# Tarefas de hoje

1. Criar conta no [Github](https://github.com)
1. Instalar e configurar o [WSL](https://docs.microsoft.com/pt-br/windows/wsl/install)
    - Falo mais em breve.
1. Instalar e configurar o
    - [Code](https://code.visualstudio.com/)
    - [WSL+Visual Studio Code](https://docs.microsoft.com/pt-br/windows/wsl/tutorials/wsl-vscode)

---

# Desenvolvimento de Software

## Lacuna de PDS1

1. Saber programar é apenas o passo inicial
1. Em pouco tempo conseguimos fazer uso de:
    - if, while, else, for, funções

1. **Como modelar um programa?**
1. **Como representar um conceito?**

---

# Desenvolvimento de Software

## Exemplo do mundo real

1. Como desenvolver um sistema de banco?
    - Clientes
    - Transações
    - Contas
    - . . .

---

# Programação Orientada a Objetos

1. Uma das formas de modelar o mundo
1. Cada entidade do mundo real pode virar um ``struct``. Será que deve?
1. Atributos
    - saldo
    - nome
    - conta

---

# Uso e Aplicação de Estruturas de Dados

1. A forma que você representa os dados guia seu programa. Quando é o melhor
   momento de usar um mapa/dicionário? Uma lista?
1. [Biblioteca STL de C++](https://en.wikipedia.org/wiki/Standard_Template_Library)

---

# Boas práticas

1. Programação é uma atividade social (acreditem ou não)
1. PDS2 é o passo `0` para desenvolver software

---

# C++ Através de Exemplos

1. Compilando
1. Olá Mundo
1. String
1. Vector
1. `namespace std`

---

# Compilando

1. Sempre faremos uso de `g++`

```bash
g++ -std=c++20 codigo.cpp -o main
```

1. Vamos por partes:
    - `g++` é o nome do compilador
    - `-std=c++20` é apenas para garantir que estamos na versão mais nova
    - `codigo.cpp` é seu código
    - `-o main` indica o programa de saída

---

# Executando

```bash
./main
```

---

## Olá Mundo!

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}
```

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=%23include%20%3Ciostream%3E%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%0Aint%20main%28%29%20%7B%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20std%3A%3Acout%20%3C%3C%20%22Hello%20World!%22%20%3C%3C%20std%3A%3Aendl%3B%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%20%20return%200%3B%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=0&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# Strings

1. Finalmente! Vamos esquecer o `'\0'` por um tempo
1. C++ tem suporte nativo para strings

```cpp
#include <iostream>
#include <string>

int main() {
  std::string hello("Olá mundo!\n");
  std::string pds2("Vamos iniciar PDS2\n");
  std::cout << hello;
  std::cout << std::endl;
  std::cout << pds2;

  std::string maisuma = "Mais uma!";
  std::cout << maisuma.size();
  std::cout << std::endl;
  return 0;
}
```
---

# Strings

## Diferentes formas de declarar

```cpp
#include <iostream>
#include <string>

int main() {
  std::string hello1("Olá mundo!\n");

  std::string hello2 = "Olá mundo!\n";
}
```

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
  string hello1("Olá mundo!\n");
  string hello2 = "Olá mundo!\n";
}
```

---

# Strings
## Suporte nativo ajuda bastante

1. Chamadas como: .size
    - Tamanho da string
    - Observe que a chamada é na string
    - Estilo um campo de um struct

1. Note a diferença: `str.size() vs strlen(str)`

```cpp
#include <iostream>
#include <string>

int main() {
  std::string hello("Olá mundo!\n");
  std::string hello2("Olá mundo!\n");
  if (hello == hello2) {
    std::cout << "c++ faz overload do == para strings!!!!.\n";
  }
  if (hello.compare(hello2) == 0) {
    std::cout << "Strings iguais.\n";
  }
  return 0;
}
```

---

# Vectors

```cpp
#include <iostream>
#include <vector>

int main()  {
  std::vector<int> dados = {};
  int v = 0;
  int i = 0;
  while (v >= 0) {
    std::cout << "Digite o " << i+1 << "-ésimo número (-1 para terminar): ";
    std::cin >> v;
    if (v < 0) break;
    dados.push_back(v);
  }

  for (int x : dados)
    std::cout << x << std::endl;
}
```

1. Nova forma de iterar
1. Vetor redimensionável, uma lista com array por baixo.

---

# Introdução ao WSL e ao Visual Studio Code
