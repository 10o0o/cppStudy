#include <iostream>

int main()
{
  int luckyNumber = 3;
  std::cout << "Find My Secret Number" << std::endl;

  int userInput;

  while (1)
  {
    std::cout << "Input: ";
    std::cin >> userInput;
    if (luckyNumber == userInput)
    {
      std::cout << "correct!!" << std::endl;
      break;
    }

    std::cout << "try again" << std::endl;
  }

  return 0;
}