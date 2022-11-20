#include <iostream>
namespace
{
  // 이 함수는 이 파일 안에서만 사용할 수 있습니다.
  // 이는 마치 static int OnlyInThisFile() 과 동일합니다.
  int OnlyInThisFile() {}
  // 이 변수 역시 static int x 와 동일합니다.
  int only_in_this_file = 0;
} // namespace
int main()
{
  OnlyInThisFile();
  // c++은 문자열에서 쌍따옴표, 문자는 따옴표 사용해야 한다!
  std::cout << "jake1" << only_in_this_file << std::endl;
  only_in_this_file = 3;

  std::cout << "jake2" << only_in_this_file << std::endl;
}
