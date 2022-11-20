#include <iostream>

/**
 * @brief
 * arr을 Ref 하는 방법
 *
 * @return int
 */

// int main()
// {
//   int arr[3] = {1, 2, 3};
//   int(&ref)[3] = arr;

//   ref[0] = 123;
//   ref[1] = 456;
//   ref[2] = 789;

//   std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;

//   return 0;
// }

/**
 * @brief
 * 2차원 배열 선언
 *
 * @return int
 */

int main()
{
  int arr[3][2] = {1, 2, 3, 4, 5, 6};
  int(&ref)[3][2] = arr;

  ref[2][1] = 10230;

  std::cout
      << arr[0][1] << ", " << arr[2][1] << std::endl;

  return 0;
}
