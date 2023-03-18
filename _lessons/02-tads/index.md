---
layout: page
title: Tipos Abstratos de Dados
has_children: true
has_toc: false
description: Tipos Abstratos de Dados
nav_order: 2
---

# Tipos Abstratos de Dados
{: .no_toc .mb-2 }

Entendendo TADs e criando TADs simples (com Douglas Macharet)
{: .fs-6 .fw-300 }

# Definição

1. Modelo matemático, acompanhado das operações definidas sobre o modelo.
    - Conjunto dos inteiros acompanhado das operações de adição, subtração e
      multiplicação.
    - A implementação do algoritmo em uma linguagem de programação exige a
      representação do TAD em termos dos tipos de dados e dos operadores
      suportados.

## Contrato
1. TADs são contratos
1. Funções que operam em cima da memória

## Encapsulamento
1. Conceito importante em TADs
	- **Usuário:**
		- Enxerga a interface
		- Não se preocupa, em primeiro momento, como é o TAD por baixo

---

# Definindo Contratos

## O que é um contrato?

1. Acordo entre duas ou mais partes
    - Quais contratos existem em um programa?
    - Requisitos de funcionalidade, desempenho, ...
1. Operações disponíveis em um TAD
    - Entradas e saídas

---

# Ideia de Contratos

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/02-tads-fig0.png)

---

# TADs vs Structs

## Então TADs são structs?

1. **Não!**
1. TADs são um conceito mais geral
1. Existem em qualquer tipo de linguagem
1. Em C++:
	- Sim, mapeiam bem para structs/classes + .h
	- Ou para interfaces
		- Assuntos futuro

---

# TADs vs Algoritmos

## Algoritmo

1. Sequência de ações executáveis: `entrada → saída`
1. Algoritmos usam TADs

## TADs

1. Contrato + Memória
1. Podemos considerar TADs como generalizações de tipos primitivos e
   procedimentos como generalizações de operações primitivas.
1. O TAD encapsula tipos de dados. A definição do tipo e todas as operações
   ficam localizadas numa seção do programa.
1. Os usuários do TAD só tem acesso a algumas operações disponibilizadas sobre
   esses dados

## Em outras Linguagens

1. TADs são um conceito de programação
1. Vamos aprender como implementar os mesmos usando classes e objetos
1. Outras linguagens
	- structs + funções ( C )
	- traits ( Rust )
	- duck typing ( Python, Ruby )
	- classes e interfaces ( Java, C++ )

---

# Como criar um TAD?

**Supondo que vamos criar um TAD qualquer. Temos que responder:**

1. Como organizar a memória?
	- Quais dados vão no struct/classe
1. Quais operações?
	- Contratos

**A primeira pergunta é mais de implementação, o TAD é descrito pela 2.**

---

# Como fazer um TAD ponto?

## Primeiro problema
1. Quais dados temos que representar?
	- Valor no eixo-x
	- Valor no eixo-y

---

# Vamos fazer em C:

```c
typedef struct {
  double _x;
  double _y;
} ponto_t;

int main() {
  ponto_t p = {1.0, 2.0};
  return 0;
}
```

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=typedef%20struct%20%7B%0A%20%20double%20_x%3B%0A%20%20double%20_y%3B%0A%7D%20ponto_t%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20ponto_t%20p%20%3D%20%7B1.0,%202.0%7D%3B%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=0&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# Destrinchando

1. Observe como começamos dizendo que vamos criar um tipo novo: `typedef`.
1. Após isto, dizemos que este tipo é um `struct`
1. Depois damos um nome `ponto_t`.
	- Eu pessoalmente gosto de nomear *structs* com `_t` no fim
	- Eu também gosto de colocar um `_` antes dos nomes dos campos internos. Isto é estilo. Não é uma regra.

```c
typedef struct {
  double _x;
  double _y;
} ponto_t;

```

---

# em C++

1. A chamada é bem diferente mas com sentido
1. Em breve vamos olhar para tudo com calma

```cpp
class Ponto {
  private:
    double _x;
    double _y;

  public:
    Ponto(double x, double y) {
      _x = x;
      _y = y;
    }
};

int main() {
  Ponto p = Ponto(2.0, 3.0);
  return 0;
}
```

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=class%20Ponto%20%7B%0A%20%20private%3A%0A%20%20%20%20double%20_x%3B%0A%20%20%20%20double%20_y%3B%0A%20%20%0A%20%20public%3A%0A%20%20%20%20Ponto%28double%20x,%20double%20y%29%20%7B%0A%20%20%20%20%20%20_x%20%3D%20x%3B%0A%20%20%20%20%20%20_y%20%3D%20y%3B%0A%20%20%20%20%7D%0A%7D%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20Ponto%20p%20%3D%20Ponto%282.0,%203.0%29%3B%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=0&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# SOCORRO!!!!

1. CLASS
1. PUBLIC
1. PRIVATE!

---

# Visibilidade

1. O `public` indica tudo que você tem acesso
1. O `private` você não tem
1. Por exemplo, o código abaixo vai falhar:

```cpp
class Ponto {
  private:
    double _x;
    double _y;

    Ponto(double x, double y) {
      _x = x;
      _y = y;
    }
};

int main() {
  Ponto p = Ponto(2.0, 3.0);
  return 0;
}
```

*É impossível fora da Classe acessar campos private*.

---

# Construtores

1. Funções que iniciam o `struct`
1. Chamadas de construtores

```cpp
// ...

public:
  Ponto(double x, double y) {
    _x = x;
    _y = y;
  }

// ...
```

1. Observe como a mesma apenas seta a memória!
1. Preste atenção no passo a passo do C++ tutor acima.

---

# Métodos

1. Um método pode ser visto como uma função em C
1. Porém a mesma pertence ao objeto. Falamos com o mesmo.

```cpp
class Ponto {
  private:
    double _x;
    double _y;

  public:
    Ponto(double x, double y) {
      _x = x;
      _y = y;
    }

    void imprime() {
      std::cout << _x;
      std::cout << _y;
    }
};

int main() {
  Ponto p = Ponto(2.0, 3.0);
  p.imprime();
  return 0;
}
```

---

# Em sala de Aula

## Vamos criar um TAD String

1. Entender melhor como criar um TAD
1. Operações além da impressão
    - Substring
    - Starts With (Começa com)
    - Size
1. O código inicial se encontra abaixo

<iframe width="800" height="500" frameborder="0" src="https://pythontutor.com/iframe-embed.html#code=%23include%20%3Ccstring%3E%20//%20fun%C3%A7%C3%B5es%20de%20C%20para%20strings%0A%23include%20%3Ciostream%3E%0A%0Ausing%20namespace%20std%3B%0A%0Aclass%20MinhaString%20%7B%0A%20%20private%3A%0A%20%20%20%20char%20*_data%3B%0A%20%20%20%20int%20_size%3B%0A%20%20public%3A%0A%20%20%20%20MinhaString%28char%20*data%29%20%7B%0A%20%20%20%20%20%20_data%20%3D%20data%3B%0A%20%20%20%20%20%20_size%20%3D%20strlen%28data%29%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20int%20size%28%29%20%7B%0A%20%20%20%20%20%20return%20_size%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20void%20print%28%29%20%7B%0A%20%20%20%20%20%20cout%20%3C%3C%20_data%3B%0A%20%20%20%20%7D%0A%7D%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20MinhaString%20ms%20%3D%20MinhaString%28%22PDS2!%22%29%3B%0A%20%20ms.print%28%29%3B%0A%0A%20%20//Descomente%20para%20gerar%20um%20erro%0A%20%20//ms._size%20%3D%2020%20%0A%20%20//quebraria%20a%20coerencia%20se%20fosse%20poss%C3%ADvel!%0A%7D&codeDivHeight=400&codeDivWidth=350&curInstr=0&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D"> </iframe>

---

# Importância da Visibilidade

1. Descomente as linhas que tentam acessar o `_size` do exemplo
2. Temos um erro de compilação!
3. Nunca quebramos a coerência do estado!

---

# std::string

1. Na prática já temos um tipo `string` para fazer uso
1. Basta realizar `include <string>` como na aula anterior
1. O nosso exemplo foi apenas para motivar TADs
1. Leia a documentação da `string` de C++
   [aqui](https://www.cplusplus.com/reference/string/string/)

---

# Notas Finais

1. Estamos iniciando o assunto da matéria
1. Lembre-se que:
	- TADs → dados + operações
	- TADs guardam estado

1. Podemos usar um struct em C
1. Em C++ usamos classes

---

# Notas Finais

## Esses TADs são iguais ou diferentes?

```cpp
class Ponto {
  private:
    float _x;
    float _y;
  public:
    Ponto(float x, float y) {
      _x = x;
      _y = y;
    }
}
```

```cpp
class Ponto {
  private:
    float _r;
    float _theta;
  public:
    Ponto(float r, float theta) {
      _r = r;
      _theta = theta;
    }
}
```

1. Iguais (em conceito)
    - Abstração do mesmo conceito da matemática
1. Diferentes (em dados)!
1. **Tipo/TAD**
    - Elementos com propriedades semelhantes
    - Clientes dependem do conceito geral

---

# Notas Finais

1. A implementação não deve ser conhecida
1. A abstração deve prover os métodos que serão utilizados para manipular os
   dados

![](https://raw.githubusercontent.com/flaviovdf/pds2-ufmg/master/assets/img/02-tads-fig1.png)

---

# Próximas Aulas

1. Usando alguns TADs mais complexos
1. Criando TADs mais complexos
1. Separando em módulos

*Aonde queremos chegar Com TADs queremos que o resto do programa seja cliente.
Apenas use as operações do mesmo.*
