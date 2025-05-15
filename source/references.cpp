#include <iostream>

/*
  Referencias em c++ são diferentes das de em JavaScript.

  Em C++, o conceito de referência é parte da linguagem e da tipagem.

  Ex: int x = 30;
      int& b = x; b é uma referência a x
      b = 20;

  Quando o valor da variável b é alterado, o valor de x também muda. Em outros termos:

  'b é uma referência direta a x. Qualquer alteração feita em b afeta diretamente a'

  Isso acontece porque as duas variaveis apontam para o mesmo endereço de memoria onde esta armazenado o valor 30

  Você está dizendo:

  "Crie um novo nome (b) que referencia exatamente o mesmo espaço de memória que a."

  Não é uma cópia, nem um ponteiro — é o mesmo objeto, com dois nomes diferentes.

  É importar notar que b não é uma cópia de x, mas sim outro nome para o mesmo espaço de memória

  Em JavaScript, podemos observar esse comportamento em tipos de dados complexos, como ojetos ou arrays, pois eles são passados por referência. JavaScript não suporta esse tipo de comportamento para referências de tipos primitovos

  Ex: let a = 5
      let b = a
      b = 50; 'a continua 5'


  # Operador &

  Em C++, esse operador possui 3 funções, dependendo de onde e como você o usa.

  1. Operador de endereço (&valor):

    int a = 24;
    int* ptr = &a;

    Nesse exemplo, & é o operador 'address-of'. Ele pega o endereço de memória da variável e armazena em ptr

  2. Declarador de referência (int& nome):

    int a = 42;
    int& ref = a;

    Nesse exemplo, o & faz parte da sintaxe de declaração de tipos: está criando uma referência à variável a.

    A variável ref não é um objeto separado que carrega o endereço de memória de a, mas um outro nome para o mesmo endereço de memória.

  3. Operador bitwise AND

*/
int main()
{

  std::string my_name = "Paulo";
  std::string my_fake_name = my_name;
  my_fake_name = "Lucas";

  std::cout << "Valor da variavel 'my_name': " << my_name << std::endl; // Output: "Paulo"

  std::string &my_ref = my_name; // 'my_ref' referencia o mesmo espaço de memoria de 'my_name'

  std::clog << "Variavel 'my_ref' referencia 'my_name'" << std::endl;

  my_ref = "Antonio"; // Ao alterar o valor de 'my_ref', também alteramos o valor de 'my_name'

  std::clog << "Valor de 'my_ref' e alterado'" << std::endl;

  std::cout << "Valor da variavel 'my_name: " << my_name << std::endl;

  std::cout << "O valor de 'my_name' muda quando 'my_ref' e alterado porque 'my_ref' e uma referencia direta a 'my_name', ou seja, ambos apontam para o mesmo espaco de memoria que armazena o valor\n";
  return 0;
}