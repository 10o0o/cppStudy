#include <iostream>

void foo()
{
  foo();
}

int main()
{
  foo();

  return 0;
}