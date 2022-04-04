---
layout: default
title: Exercícios para Casa
parent: Tipos Abstratos de Dados
---

# Exercícios para Casa
{: .no_toc .mb-2 }

Vários Exercícios por Fernando Quintão
{: .fs-6 .fw-300 }

Lembre-se do passo a passo:
- Quais dados temos que representar?
- Quais operações o temos que implementar suporta?

---

**Sumário**
1. Tarefas
{:toc}

---

---

## TAD Conta

Considere que uma conta de banco pode ser representada pelo tipo abstrato de dados
(TAD) `Conta`. O TAD deve respeitar os seguintes requisitos:
- Toda conta deve possui um dono e um saldo;
- O saldo é sempre um número inteiro;
- O dono é representado pelo seu nome;
- Deve ser possível descobrir o saldo e o dono de qualquer conta;
- Deve ser possível depositar e retirar dinheiro da conta;
- O saldo da conta deve ser sempre atualizado após um deposito ou uma retirada;
- O saldo nunca deve ser negativo.

(a) Quais atributos e operações o tipo abstrato de dados `Conta` deve possuir?
(b) Escreva, em c++, uma implementação do tipo abstrato de dados `Conta`.

---

## TAD Fração

2. Considere que o Tipo Abstrato de Dados (TAD) `Fracao` representa um número
fracionário. Escreva, em C++, uma implementação de `Fracao` considerando as
seguintes operações:
- multiplicação,
- divisão,
- soma e
- subtração.

Obs: cada uma das operações pode ser realizada entre duas frações ou entre uma
fração e um inteiro.

Esqueleto abaixo
```cpp
class Fracao {
  private:
    int _numerador;
    int _denominador;
  public:
    // Observe dois métodos com mesmo nome e assinaturas diferentes!
    Fracao soma(int outro_valor) {
      // código aqui
    }
    Fracao soma(Fracao outro_valor) {
      // código aqui
    }
    // Resto do TAD
};
```

---

## TAD Aluno

Complicando um pouco, vamos fazer um TAD `Aluno`. Além de informações base do
discente, vide exemplo abaixo, queremos que o aluno armazene uma lista de
disciplinas qual cursa. Observe no esqueleto abaixo que usamos um `vector` para
tal.



Esqueleto abaixo:
```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno {
  private:
    string *_nome;
    int _matricula;
    vector<int> _materias;
  public:
    Aluno() {
      // Preencha!!
    }

    void realizar_matricula(int cod_disciplina) {
      //matricula o aluno em alguma disciplina
    }

    void print() {
      //imprime os dados do aluno
    }
};

int main() {
  // Tente fazer o método print imprimir algo como:
  // - Nome do aluno
  // - Matricula
  // - Materias atuais
  //
  // Ideia de main (descomente e faça funcionar!):
  //
  // Aluno a = Aluno(mat, nome);
  // a.realizar_matricula(204);
  // a.realizar_matricula(212);
  // a.print();
  }
  ```

---

## TAD Matriz

Usando um `vector<vector<int>>`, ou seja um Vector de Vectors, como fazer um
TAD matriz?
