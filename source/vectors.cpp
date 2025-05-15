#include <iostream>

/*
  A implementação de Arrays em C++ é diferente da implementação em JavaScript

  Em JavaScript, a linguagem nos fornece uma interface nativa e otimizada de um
  array com comprimento dinâmico — podemos aumentar e diminuir o tamanho do array em tempo de execução

  Em linguagens como C/C++ e Java, arrays possuem tamanhos fixos, definidos no momento da declaração do array.

  "Arrays são estruturas de dados que armazenam seus elementos em posições consecutivas na memória, o que permite acesso rápido por índice."

  Isso significa que os valores de um array são "vizinhos", garantindo eficiência no acesso.

  Sintaxe de declaração de array em C++:

    tipo nomedoarray[tamanho] = {valores};

  Quando declaramos um array de tamanho fixo e atribuimos apenas parte dos valores, os índices que não receberam valores serão inicializados com o valor 0.
*/
int main()
{

  int integerArr[4] = {1, 2, 3, 4};

  std::cout << "Endereco de memoria do primeiro item do array: " << integerArr << std::endl; // Printa o endereço de memória onde o primeiro item do array está localizado

  std::cout << "Valor armazenado na primeira posicao do array: " << integerArr[0] << std::endl;
  /*
    Como arrays são apenas endereços de memória,
    podemos utilizar ponteiros para alterar os valores armazenados
    nesses endereços.

    Ex:
  */

  *integerArr = 50; // Por padrão, um array aponta para o endereço de memória do primeiro item. Estamos utilizando essa vantagem para alterar o valor do primeiro item através de ponteiros.

  std::cout << "Valor armazenado na primeira posicao do array apos alteracao com ponteiro: " << integerArr[0] << std::endl;

  /*
    === Iterando sobre arrays com ponteiros ===

  */
  return 0;
}