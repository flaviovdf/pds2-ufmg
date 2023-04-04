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

## 1. Leitura do Disco e Vector de um TAD Aluno

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

Suponha que existe um arquivo no disco, copie e cole em
arquivo, o conteúdo abaixo:

```
Flavio 20311028 01
Flavio 20311028 02
Flavio 20311028 03
Pedro 20311018 01
Pedro 20311018 04
Ana 20332019 04
```

Aqui, cada linha indica o nome e a matrícula de um discente.

### 1.1 Escreva um código locar um novo aluno para cada registro (linha)

Observe que o código abaixo faz uso de tipos novos, como o
`std::ifstream` e o `std::istringstream`. Em C++ a interação
com a entrada e saída é feita através de `streams` (ou
fluxos). Durante o curso, você já usou o `std::cout` e
`std::cin`. O tipo `std::ifstream` se comporta quase que
exatamente como os streams `cout` e `cin`. Depois de
criado, ou seja, aberto o arquivo, observe que fazemos uso
dos operadores `<<` e `>>` no mesmo.

```cpp
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
  std::ifstream entrada("nome_do_arquivo.txt"); // 0. Abre o arquivo
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

  entrada.close();  // 3. Fecha o arquivo
}

```

### 1.2 Escreva uma função que armazena os nomes únicos dos alunos

Antes de ver a resposa se pergunte, você vai usar qual container?
1. Vector
1. Set
1. Map
1. Deque
1. List

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

### 1.3 Imprima os nomes únicos

```cpp
// use um for each
for (std::string nome : nome)) {
  std::cout << nome << std::endl;
}
```

### 1.4 Imprima os nomes únicos

```cpp
// use um for each
for (std::string nome : nome)) {
  std::cout << nome << std::endl;
}
```

### 1.5 Escreva um TAD `RegistroDeAlunos que guarda os alunos por matrícula.

Antes de ver a resposa se pergunte, você vai usar qual container?
1. Vector
1. Set
1. Map
1. Deque
1. List

```cpp
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <vector>


using namespace std;

class Aluno {
  private:
    std::string _nome;
    int _matricula;
    set<int> _materias;
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

    void matricular(int materia) {
      _materias.insert(materia);
    }

    set<int> get_materias() {
      return _materias;
    }
};

class RegistroDeAlunos {
  private:
    map<int, Aluno> _registro_alunos;
  public:
    void inserir_aluno(Aluno a) {
      _registro_alunos.insert(
        pair<int, Aluno>(a.get_matricula(), a)
      );
    }

    void adicionar_materia(int matricula, int materia) {
      _registro_alunos.at(matricula).matricular(materia);
    }

    bool ja_registrada(int matricula) {
      return _registro_alunos.count(matricula) > 0;
    }

    void imprime_registro() {
      auto it = _registro_alunos.begin();
      while (it != _registro_alunos.end()) {
        int matricula = it->first;
        Aluno a = it->second;
        int n = a.get_materias().size();

        cout << "O aluno com nome: " << a.get_nome();
        cout << " e matricula " << matricula;
        cout << " se matriculou em " << n << " materias";
        cout << endl;

        it = next(it);
      }
    }
};


int main() {
  fstream arquivo_entrada_stream;
  arquivo_entrada_stream.open("alunos.dat");
  
  RegistroDeAlunos registro;
  while (!arquivo_entrada_stream.eof()) {
    string nome;
    arquivo_entrada_stream >> nome;

    int matricula;
    arquivo_entrada_stream >> matricula;

    int cod_disciplina;
    arquivo_entrada_stream >> cod_disciplina;

    if (!registro.ja_registrada(matricula)) {
      Aluno a = Aluno(nome, matricula);
      registro.inserir_aluno(a);
    }
    registro.adicionar_materia(matricula, cod_disciplina);
  };
  
  registro.imprime_registro();

  arquivo_entrada_stream.close();
  return 0;
}
```

## 2. Arquivo de Tweets

Dado um arquivo grande de texto. Em cada linha, temos um texto diferente (p. ex., tweets, documentos, conversas etc.).

### 2.1 Como que podemos: carregar o arquivo na memória do computador?
### 2.2 Filtrar as linhas que ocorrem algum termo?

```cpp
#include <iostream>
#include <list>
#include <sstream>
#include <string>

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::list<std::string> linhas;

  while (std::getline(std::cin, linha)) {
    if (linha == "sair") // 2. Se o usuário digitar sair, quebra o laço
      break;
    linhas.push_back(linha);
  }

  std::string termo;
  std::cout << "Digite o termo para filtrar" << std::endl;
  std::cin >> termo;

  std::list<std::string>::iterator it = linhas.begin();
  while (it != linhas.end()) {
    linha = *it;
    int posicao = linha.find(termo);    // find procura o termo na linha
    if (posicao != std::string::npos)   // aqui comparamos se achamos algo
      linhas.erase(it);                 // observe que o erase recebe o it
    it = next(it);
  }

  for (std::string linha : linhas) {
    std::cout << linha << std::endl;
  }
}
```

### 2.3 Contar quantas vezes cada palavra aparece?

```cpp
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::map<std::string, int> contagem;
  std::string termo;
  while (std::getline(std::cin, linha)) {
    if (linha == "sair")
      break;
    stream_string = std::istringstream(linha);
    while (std::getline(stream_string, termo, ' ')) {
      if (contagem.count(termo) == 0) { // 0 se não existe; 1 cc.
        contagem[termo] = 0;
      }
      contagem[termo] = contagem[termo] + 1;
    }
  }

  std::cout << std::endl;
  for (std::pair<std::string, int> pair : contagem) {
    std::cout << "Termo : " << pair.first << " Contagem: " << pair.second;
    std::cout << std::endl;
  }
}
```
