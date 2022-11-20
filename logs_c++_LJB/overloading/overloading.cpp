#include <iostream>

// void print(int x) { std::cout << "int : " << x << std::endl; }
// void print(char x) { std::cout << "char : " << x << std::endl; }
// void print(double x) { std::cout << "double : " << x << std::endl; }

// int main()
// {
//   int a = 1;
//   char b = 'c';
//   double c = 3.2f;
//   print(a);
//   print(b);
//   print(c);
//   return 0;
// }

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "double : " << x << std::endl; }
int main()
{
  int a = 1;
  char b = 'c';
  double c = 3.2f;
  print(a);
  print(b);
  // print(c);
  return 0;
}

/**
 * @brief 함수의 오버로딩
 *
 * 1단계
 * 자신과 타입이 정확히 일치하는 함수를 찾는다
 *
 * 2단계
 *  - Char, unsigned char, short >> int로 변환
 *  - Unsinged short는 int의 크기에 따라 int 혹은 unsigned int로 변환
 *  - Float는 double로 변환
 *  - Enum은 int로 변환
 *
 * 3단계
 *  - 임의의 숫자타입은 다른 숫자 타입으로 변환된다. (ex, float > int)
 *  - Enum도 임의의 숫자 타입으로 변환된다. (ex, Enum < double)
 *  - 0은 포인터 타입이나 숫자 타이븡로 변환된 0은 포인터 타입이나 숫자 타입으로 변환된다.
 *  - 포인터는 void 포인터로 변환된다.
 *
 * 4단계
 *  - 유저 저으이된 타입 변환으로 일치하는 것을 찾는다
 *
 * 해당 과정을 통해서라도 일치하는 함수를 찾을 수 없거나, 같은 단계에서 두 개 이상이 일치하는 경우,
 * 모호하다(ambiguous)라고 판단하여, 오류를 발생시킨다.
 *
 */