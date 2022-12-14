#include <iostream>

class Point
{
  int x, y;

public:
  Point(int pos_x, int pos_y);

  int getX();
  int getY();
};

class Geometry
{
  // 점 100 개를 보관하는 배열.
  Point *point_array[100];
  int lastIndex = 0;

public:
  Geometry(Point **point_list);
  Geometry();
  void AddPoint(const Point &point)
  {
    *point_array[lastIndex] = point;
    lastIndex += 1;
  }

  // 모든 점들 간의 거리를 출력하는 함수 입니다.
  void PrintDistance()
  {
    for (int i = 0; i <= lastIndex; i++)
    {
      for (int j = i + 1; j <= lastIndex; j++)
      {
      }
    }
  };

  // 모든 점들을 잇는 직선들 간의 교점의 수를 출력해주는 함수 입니다.
  // 참고적으로 임의의 두 점을 잇는 직선의 방정식을 f(x,y) = ax+by+c = 0
  // 이라고 할 때 임의의 다른 두 점 (x1, y1) 과 (x2, y2) 가 f(x,y)=0 을 기준으로
  // 서로 다른 부분에 있을 조건은 f(x1, y1) * f(x2, y2) <= 0 이면 됩니다.
  void PrintNumMeets();
};

int Point::getX()
{
  return x;
};

int Point::getY()
{
  return y;
};

int main()
{

  return 0;
}