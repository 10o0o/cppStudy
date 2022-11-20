#include <iostream>

using namespace std;

int main()
{
  /*
  배열 typeName arrayName[arraySize];

  - 초기화를 선언 이후, 나중에 할 수는 없다
  - 배열을 다른 배열에 통째로 대입할 ㅅ ㅜ없다
  - 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
  - 배열을 부분적으로 초기화하면, 나머지 원소는 모두 0으로 설정된다
  - 배열을 초기화 할 때, 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.
  */

  short month[] = {1, 2, 3}; // 선언

  cout << month << endl;

  //문자열
  // char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char a[] = "Hello";

  cout << a << endl;

  return 0;
}