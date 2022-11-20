#include <iostream>

int changeVal(int &p)
{
  p = 3;

  return 0;
}

int main()
{
  int number = 5;

  std::cout << number << std::endl;
  changeVal(number);
  std::cout << number << std::endl;
}

// int main()
// {
//   int x;
//   int &y = x;
//   int &z = y;

//   x = 1;
//   std::cout
//       << "x : "
//       << x
//       << " y : "
//       << y
//       << " z : "
//       << z
//       << std::endl;
//   y = 2;
//   std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
//   z = 3;
//   std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
// }

// int main()
// {
//   // 리터럴 타입 참조 할 시 에러!

//   const int &ref = 4;
//   int a = ref;

//   std::cout << ref << std::endl;
//   std::cout << a << std::endl;
// }

/**
 * @brief
 * 배열의 레퍼런스는 불가능하다.
 *
 */

// int main()
// {
//   int a, b;
//   int &arr[2] = {a, b};

//   return 0;
// }