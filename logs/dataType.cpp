#include <iostream> //전처리 지시자
#include <climits>

/**
 * @brief
 * c++에서 함수를 사용하고자 한다면
 * 반드시 그 함수의 원형을 미리 정의하여야 한다.
 *
 */

using namespace std;
// ';' 종결자의 역할을 한다.

int main()
// c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
{
  // cout << "Hello" << endl;
  // << 데이터의 흐름을 나타냄
  // cout << "World!";

  // 1. 변수
  // 자료형? 메모리 영역(주소값)에 저장

  // int a;
  // a = -7.12323444234;

  // int b = 3;

  // cout << a << '&' << b;

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "int는 " << sizeof n_int << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

  cout << "short은 " << sizeof n_short << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;

  cout << "long은 " << sizeof n_long << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

  cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

  return 0;
}
