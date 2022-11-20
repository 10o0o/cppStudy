#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int userInput;
  cout << "Introduce My Self!" << endl;
  cout << "1. name" << endl;
  cout << "2. age" << endl;
  cout << "3. sex" << endl;
  cin >> userInput;

  switch (userInput)
  {
  case 1:
    cout << "Jake ! " << endl;
    break;

  case 2:
    cout << "26" << endl;
    cin >> userInput;
    break;

  case3:
    cout << "male" << endl;
    cin >> userInput;
    break;

  default:
    cout << "you have no idea" << endl;
    break;
  }

  return 0;
}