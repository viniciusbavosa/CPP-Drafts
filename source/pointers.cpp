#include <iostream>
#include <string>

/*
  Ponteiros são variaveis que armazenam endereços de memória de outra variavel.
  Para definir um ponteiro, utiliza o operador * ao lado do tipo de dado

  Ex: tipo* nomeDoPonteiro;

  Para acessar o valor que está no endereço apontado, utiliza-se o operador de desreferencia * antes do nome do ponteiro

  Ex: int x = 42;
      int* ponteiro = &x;
      std::cout << *ponteiro

  O operador & (endereço de) extrai o endereço de memória
*/

int main()
{
  std::string name;
  int age;

  std::cout << "Digite seu nome: ";
  std::cin >> name;
  std::cout << "Digite sua idade: ";

  std::cin >> age;

  std::cout << "Seu nome e " << name << " e sua idade e " << age << std::endl;

  std::string *nameP = &name;
  int *ageP = &age;

  std::cout << "Os espacos de memoria referente as variaveis 'name' e 'age' sao: " << std::endl
            << nameP << std::endl
            << ageP << std::endl;
  return 0;
}