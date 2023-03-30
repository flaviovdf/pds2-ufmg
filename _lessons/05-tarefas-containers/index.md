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

### Escreva uma função que pegar os nomes únicos dos alunos

[Slides](https://docs.google.com/presentation/d/1VuzsmsKkgtQiFidEZw-sKHz0Me4Bo0a5SRJy5KgdO24/edit#slide=id.p)
