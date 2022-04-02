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
(TAD) CONTA. O TAD deve respeitar os seguintes requisitos:
- Toda conta deve possui um dono e um saldo;
- O saldo é sempre um número inteiro;
- O dono é representado pelo seu nome;
- Deve ser possível descobrir o saldo e o dono de qualquer conta;
- Deve ser possível depositar e retirar dinheiro da conta;
- O saldo da conta deve ser sempre atualizado após um deposito ou uma retirada;
- O saldo nunca deve ser negativo.

(a) Quais atributos e opera ̧c ̃oes o tipo abstrato de dados CONTA deve possuir?
(b) Escreva, em c++, uma implementa ̧c ̃ao do tipo abstrato de dados CONTA.
(c) Agora, considere que  ́e poss ́ıvel ter v ́arias contas. Escreva, em c++, uma imple-
menta ̧c ̃ao do tipo abstrato de dados CONTAS.
(d) Considere que  ́e poss ́ıvel transferir dinheiro de uma conta para outra. Escreva,
em c++, uma fun ̧c ̃ao transferencia que transfere um determinado valor de uma
conta A para outra conta B. Se achar necess ́ario, adicione novos atributos e
opera ̧c ̃oes ao tipo abstrados de dados CONTA. Uma possibilidade para o m ́etodo
transferencia  ́e:
void transferencia(CONTAS contas, int conta1, int conta2, int valor);

---

## TAD Fração

2. Considere que o Tipo Abstrato de Dados (TAD) `Fracao` representa um n ́umero
fracion ́ario. Escreva, em c++, uma implementa ̧c ̃ao de `Fracao` considerando as
seguintes opera ̧c ̃oes: multiplicacao, divisao, soma e subtracao.
Obs: cada uma das opera ̧c ̃oes pode ser realizada entre duas fran ̧c ̃oes ou entre uma
fran ̧c ̃ao e um inteiro.

---

## Como fazer um TAD aluno? Esqueleto abaixo:

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

## Como fazer um TAD matriz?
