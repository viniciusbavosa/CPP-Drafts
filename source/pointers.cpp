#include <iostream>

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