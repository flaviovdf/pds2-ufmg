---
layout: page
title: Prática de Containers
has_children: true
has_toc: false
description: Prática de Containers
nav_order: 5
---

# Prática de Containers
{: .no_toc .mb-2 }

Brincando um pouco com containers
{: .fs-6 .fw-300 }

---

# Vamos práticar com containers um pouco

## Leitura do Disco e Vector de um TAD

Dado o TAD aluno abaixo:
```cpp
class Aluno {
  private:
    std::string _nome;
    int _matricula;
  public:
    Aluno(std::string nome, int matricula) {
      _nome = nome;
      _matricula = matricula;
    }
    
    std::string get_nome() {
      return _nome;
    }
    
    int get_matricula() {
      return _matricula;
    }
};

```

Suponha que existe um arquivo no disco, copie e cole em arquivo, o conteúdo abaixo:
```
Flavio 20311028 01
Flavio 20311028 02
Flavio 20311028 03
Pedro 20311018 01
Pedro 20311018 04
Ana 20332019 04
```
Aqui, cada linha indica o nome e a matrícula de um discente.

### Escreva um código locar um novo aluno para cada registro (linha)

<details>
<summary>Resposta</summary><p>

```cpp
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
  std::ifstream entrada("nome_do_arquivo.txt");
  std::string linha;
  
  // 1. Lê o stream linha a linha
  while (std::getline(entrada, linha)) {
    
    // 2. Separa a linha em palavra. Para isto, se usa o istringstream
    //    Similar ao sscanf de C, usamos um texto como um arquivo.
    
    auto stream_string = std::istringstream(linha);
    std::string nome;
    int matricula;
    int codigo_disciplina;
  
    stream_string >> nome;                  // joga do stream no nome
    stream_string >> matricula;             // joga do stream na matricula
    stream_string >> codigo_disciplina;     // joga do stream no codigo

    Aluno aluno(nome, matricula);
  }
  entrada.close();
}

```  

</p></details>
  
### Escreva uma função que pega os nomes únicos dos alunos

Antes de ver a resposa se pergunte, você vai usar qual container?
1. Vector
1. Set
1. Map
1. Deque
1. List
  
<details>
<summary>Resposta</summary><p>
  
```cpp
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <set>
#include <string>

int main() {
  std::ifstream entrada("nome_do_arquivo.txt");
  std::string linha;
  std::set<std::string> nomes;
  
  // 1. Lê o stream linha a linha
  while (std::getline(entrada, linha)) {
    
    // 2. Separa a linha em palavra. Para isto, se usa o istringstream
    //    Similar ao sscanf de C, usamos um texto como um arquivo.
    
    auto stream_string = std::istringstream(linha);
    std::string nome;
    int matricula;
    int codigo_disciplina;
  
    stream_string >> nome;                  // joga do stream no nome
    stream_string >> matricula;             // joga do stream na matricula
    stream_string >> codigo_disciplina;     // joga do stream no codigo

    Aluno aluno(nome, matricula);
    alunos.add(nome);                       // 3. pega os únicos
  }
  entrada.close();
}

std::set<std::string> nomes;
```
  
</p></details>

### Imprima os nomes únicos
  
<details>
<summary>Resposta</summary></p>
  
```cpp
// use um for each
for (std::string nome : nome)) {
  std::cout << nome << std::endl;
}
```
  
</details>

### Imprima os nomes únicos
  
<details>
<summary>Resposta</summary>
  
```cpp
// use um for each
for (std::string nome : nome)) {
  std::cout << nome << std::endl;
}
```

</p></details>
  
### Escreva um TAD `RegistroDeAlunos que guarda os alunos por matrícula.

Antes de ver a resposa se pergunte, você vai usar qual container?
1. Vector
1. Set
1. Map
1. Deque
1. List
  
<details>
<summary>Resposta</summary><p>
  
```cpp
// Feito em sala de aula
``` 

</p></details>
  
[Slides](https://docs.google.com/presentation/d/1VuzsmsKkgtQiFidEZw-sKHz0Me4Bo0a5SRJy5KgdO24/edit#slide=id.p)
