#include <iostream>
#include <ctime>

class Date
{
  int year_;
  int month_;
  int day_;
  // 1 부터 12 까지.
  // 1 부터 31 까지.

  int getMaxDay()
  {
    int maxDay;

    switch (month_)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      maxDay = 31;
      break;

    case 2:
      maxDay = 28;
      break;

    default:
      maxDay = 30;
      break;
    }

    return maxDay;
  }

public:
  void SetDate(int year, int month, int date)
  {
    year_ = year;
    month_ = month;
    day_ = date;
  };

  void AddDay(int inc)
  {
    int maxDay = getMaxDay();

    int daySum = inc + day_;

    while (daySum > maxDay)
    {
      month_ += 1;
      daySum = daySum - maxDay;
    }

    while (month_ > 12)
    {
      year_ += 1;
      month_ -= 12;
    }

    day_ = daySum;
  };

  void AddMonth(int inc)
  {
    int monthSum = month_ + inc;

    while (monthSum > 12)
    {
      year_ += 1;
      monthSum -= 12;
    }

    month_ = monthSum;
  };
  void AddYear(int inc)
  {
    year_ += inc;
  };
  void ShowDate()
  {
    std::cout << "년도: " << year_ << std::endl;
    std::cout << "월: " << month_ << std::endl;
    std::cout << "일: " << day_ << std::endl;
  };
};

int main()
{
  std::time_t t = std::time(nullptr);
  std::tm *now = std::localtime(&t);

  std::cout << "Current Date: " << now->tm_mday << '/' << (now->tm_mon + 1) << '/'
            << (now->tm_year + 1900) << std::endl;

  Date date;

  date.SetDate(now->tm_year + 1900, now->tm_mon, now->tm_mday);
  date.AddDay(100);
  date.AddMonth(100);
  date.AddYear(100);

  date.ShowDate();

  return 0;
}