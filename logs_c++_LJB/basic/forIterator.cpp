#include <iostream>

int main()
{
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
    sum += i;
  }

  for (int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
    sum += i;
  }

  std::cout << "sum: " << sum << std::endl;

  return 0;
}
