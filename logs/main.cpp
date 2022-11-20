#include <iostream>

using namespace std;

int main()
{
  // 구조체: 다른 데이터형이 허용되는 데이터의 집합
  // cf) 배열: 같은 데이터형의 집합

  // 축구선수
  struct MyStruct
  {
    string name;
    string position;
    float height;
    float weight;
  };

  // MySbtrucbt A = {
  //     "jake",
  //     "Striker",
  //     183.0,
  //     77,
  // };

  // MyStruct B = {};

  // cout << A.name << endl;
  // cout << B.name << endl;

  MyStruct A[2] = {
      {"A", "A", 1, 1},
      {"B", "B", 2, 2},
  };

  cout << A[0].height << endl;

  return 0;
}