#include <iostream>
#include <string>

int userID()
{
  int number;
  std::cout << "Digite um numero: ";
  std::cin >> number;
  return number;
}

std::string getUsername()
{
  std::string username;
  std::cout << "Digite seu nome de usuario: ";
  std::getline(std::cin, username); // Native method that inserts a stream of character into a variable
  return username;
}

int main()
{
  // printf("Your ID is %i", userID() + 3); // This is a C method, avoid using in C++ programs

  std::string username = getUsername();
  int id = userID();

  std::string favoriteColor;
  std::cout << "Qual sua cor favorita? ";
  std::cin >> favoriteColor;

  std::cout << "Your ID is " << id << " and your username is " << username << std::endl;
  std::cout << "By the way, " << favoriteColor << " is also my favorite color" << std::endl;
  return 0;
}
