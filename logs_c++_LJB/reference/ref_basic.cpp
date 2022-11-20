#include <iostream>

int change_val(int *p)
{
  *p = 3;

  return 0;
}

int main()
{
  int number = 5;

  std::cout << number << std::endl;
  change_val(&number);
  std::cout << number << std::endl;
}

// int main()
// {
//   int a = 3;
//   int &anotherA = a;

//   anotherA = 5;
//   std::cout << "a: " << a << std::endl;
//   std::cout << "anotherA: " << anotherA << std::endl;

//   return 0;
// }

// int main()
// {
//   int a = 10;
//   int &anotherA = a;

//   std::cout << a << std::endl;
//   std::cout << anotherA << std::endl;

//   int b = 3;
//   anotherA = b;

//   std::cout << a << std::endl;
//   std::cout << anotherA << std::endl;

//   return 0;
// }

// int main()
// {
//   int a = 10;
//   int *p = &a;

//   std::cout << p << std::endl; // 주소값

//   int b = 3;
//   p = &b;

//   std::cout << p << std::endl; // 주소값
// }