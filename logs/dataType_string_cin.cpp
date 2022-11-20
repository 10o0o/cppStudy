#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  // const int Size = 15;
  // char name1[Size];
  // char name2[Size] = "c++programming";

  // cout << "안녕하세요! 저는 " << name2;
  // cout << "입니다! 성함이 어떻게 되시나요?\n";
  // // cin >> name1; 공백 미포함
  // cin.getline(name1, Size);
  // cout << "음, " << name1 << "씨, 당신의 이름은 ";
  // cout << strlen(name1) << " 자 입니다만\n";
  // cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
  // cout << "이름이" << name1[0] << "자로 시작하는군요.\n";
  // name2[3] = '\0';
  // cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
  // cout << name2 << endl;

  char char1[20];
  char char2[20] = "jauar";
  string str1;
  string str2 = "panda";
  // char1 = char2; // 틀리다
  str1 = str2; // 맞다
  cout << str1 << endl;

  return 0;
}