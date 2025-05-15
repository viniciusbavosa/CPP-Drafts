# 📘 C++ Drafts

Uma coleção de arquivos para estudo dos fundamentos da linguagem C++.

## 📂 Arquivos

- `helloworld.cpp`
- `cstdio.cpp`
- `favcolor.cpp`
- `pointers.cpp`
- `references.cpp`

## 🧠 Tópicos de Estudo

### `helloworld.cpp`

Neste arquivo, explorei os conceitos básicos da linguagem C++:

- Como incluir bibliotecas externas usando `#include <>`.
- A função da biblioteca `iostream` para operações de entrada e saída.
- A estrutura básica de um programa C++, com a declaração do método `main`, que serve como ponto de entrada da aplicação.
- Como imprimir uma string no terminal usando o método `cout`.
- Prefixação usando _namespaces_ com `std::cout`.

### `cstdio.cpp`

Nesse arquivo, aprendi a utilizar bibliotecas e métodos da linguagem C, como `puts()` e `cstdio`. Apesar de não ser recomendado usar funções de C em C++, conhecimento adicional nunca é demais.

### `favcolor.cpp`

Um programa simples que interage com o usuário através do terminal. Nele, é requisitado informações fictícias como nome de usuário, idade e cor favorita.

Aprendi:

- Como capturar _input_ do usuário através do método `std::cin`
- Entendi como os métodos de Input & Output são polimorficos, pois quem é responsável por definir qual é o dispositivo de Input e qual o dispositivo de Output é o Sistema Operacional.
- Como tipar strings com `std::string`. Estava tentando tipar com `char`, porém esse serve apenas para 1 caractere
- Como criar outras funções além de `main`. Elas devem ser declaradas antes da função `main`, pois o compilador precisa saber que elas existem

### `pointers.cpp`

Nesse programa, imprimi na tela o valor de duas variáveis `name` e `age`, além de seus respectivos endereços de memória
Aprendi que:

- Ponteiros nada mais são que endereços de memória de outra variável
- Para declarar um ponteiro, utiliza-se o operador `*` antes do nome da variável, e o operador `&` no valor da variável

Ex: **tipo \*nomeDoPonteiro = &valor;**

- O operador `&` extrai o endereço de memória do valor
- Para acessar o **valor** armazenado no endereço de memória para o qual o ponteiro aponta, deve-se utilizar o operador `*` (**de desreferência**) antes do nome do ponteiro.

Ex:

```cpp
int x = 42;
      int* ponteiro = &x;
      std::cout << *ponteiro
```

## Observações Gerais

Com o compilador gcc, podemos compilar arquivos c++ de duas maneiras:

- Compilar arquivos C++ diretamente
- Criar arquivos objeto (`.o`) e compilar após

Para compilar arquivos C++ para arquivos objeto e depois gerar executáveis, usa-se o comando

```sh
g++ -c main.cpp
g++ -c util.cpp

g++ main.o util.o -o programa.exe
```

- A flag `-c` diz ao g++ para apenas compilar e não linkar.
- A flag `-o` diz ao g++ o output que deve ser gerado

Para compilar arquivos C++ diretamente, usa-se o comando

```sh
g++ main.cpp -o programa.exe
```

### Benefícios de usar arquivos objeto

- **1. Compilação incremental (mais rápida)**

  - Quando você altera só um dos arquivos `.cpp`, só esse precisa ser recompilado
  - Os arquivos `.o` não modificados podem ser reaproveitados no linking

  ```bash
  g++ -c funcoes.cpp   # só recompila este
  g++ main.o funcoes.o -o programa.exe
  ```

- **2. Melhor organização e escalabilidade**

  - Em projetos grandes, dividir o código em módulos com arquivos `.o` permite trabalhar em partes isoladas

- **3. Facilita _build systems_ (Make, Ninja, CMkae)**

  - Sistemas como o `make` detectam mudanças em arquivos `.cpp` e só recompilam o necessário, usando os `.o`

- **4. Separação entre compilação e _linking_**
  - Ajudar a isolar erros:
    - Compilação: erros de sintaxe, tipos
    - _Linking_: erros de símbolos indefinidos (e.g., função não implementada)
