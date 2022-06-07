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

Considere que uma conta de banco pode ser representada pelo
tipo abstrato de dados (TAD) `Conta`. O TAD deve respeitar
os seguintes requisitos:
- Toda conta deve possui um dono e um saldo;
- O saldo é sempre um número inteiro;
- O dono é representado pelo seu nome;
- Deve ser possível depositar e retirar dinheiro da conta;
- O saldo da conta deve ser sempre atualizado após um
  deposito ou uma retirada;
- O saldo nunca deve ser negativo.

(a) Quais atributos e operações o tipo abstrato de dados `Conta` deve possuir?

<details>
<summary>Solução</summary>

Atributos
- Dono da conta (string)
- Saldo (inteiro)

Operações
- Retirar
- Depositar

<details>


(b) Escreva, em c++, uma implementação do tipo abstrato de dados `Conta`.

<details>
<summary>Solução</summary>

```cpp
#include <string>

using namespace std;

class Conta {
  private:
    string _dono;
    unsigned int _saldo;
  public:
    Conta(string dono) {
      _dono = dono;
      _saldo = 0;
    }

    /*
     * Saca um valor.
     * Retornar um erro caso o saldo fique negativo.
     */
    boolean sacar(unsigned int valor) {
      if (valor > _saldo) {
        return false;
      }

      _saldo -= valor;
      return true;
    }

    /*
     * Deposita um valor.
     */
    void depositar(unsigned int valor) {
      _saldo += valor;
    }

    /*
     * Retorna o saldo da conta.
     */
    unsigned int get_saldo() {
      return _saldo;
    }
};
```

</details>

---

## TAD Fração

2. Considere que o Tipo Abstrato de Dados (TAD) `Fracao`
   representa um número fracionário. Escreva, em C++,
   uma implementação de `Fracao` considerando as seguintes
   operações:
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

```cpp
#include <vector>

using namespace std;

class Matriz {
  private:
    int _nlinhas;
    int _ncolunas;
    vector<vector<float>> _dados;
  public:
    Matriz(int nlinhas, int ncolunas) {
      _nlinhas = nlinhas;
      _ncolunas = ncolunas;
      for (int linha = 0; linha < _nlinhas; linha++) {
        vector<float> dados_linha;
        _dados.push_back(dados_linha);
        for (int _ = 0; _ < _ncolunas; _++) {
          _dados[linha].push_back(0);
        }
      }
    }
    void preenche(int linha, int coluna, float valor) {

    }

    Matriz soma(Matriz outra) {

    }
};
```
