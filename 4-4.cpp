#include <iostream>

using namespace std;

class Date
{
    int year_;
    int month_; // 1 부터 12 까지.
    int day_;   // 1 부터 31 까지.

public:
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    // 해당 월의 총 일 수를 구한다.
    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();

    Date(int year, int month, int day)
    {
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate()
{
    std::cout << "today is " << year_ << "  " << month_ << "  " << day_
              << "  " << std::endl;
}

int main()
{
    Date day(2011, 3, 1);
    day.ShowDate();

    day.AddYear(10);
    day.ShowDate();

    //
    int AAA;
    std::cin >> AAA;
    return 0;
}