#include <iostream>

using namespace std;

class Date
{
    int year_;
    int month_; // 1 부터 12 까지.
    int day_;   // 1 부터 31 까지.

public:
    void SetDate(int year, int month, int day)
    {
        year_ = year;
        month_ = month;
        day_ = day;
    }
    void AddYear(int inc)
    {
        year_ += inc;
    }
    void AddMonth(int inc)
    {
    }
    void AddDay(int inc)
    {
    }
    void ShowDate()
    {
    }
};

int main()
{
    Date date;

    int year, month, day;
    cout << "seturyear : ";

    while (cin >> year)
    {
        if (1999 < year < 2025)
        {
        }
        else
        {
            cout << "plz enter value within 1999~2025" << endl;
        }
    }

    cout << "seturmonth : ";
    cin >> month;
    cout << "seturday : ";
    cin >> day;
    date.SetDate(year, month, day);

    int addyear;
    cout << "add the year : ";
    cin >> addyear;
    date.AddYear(addyear);

    // d
    int AAA;
    std::cin >> AAA;
    return 0;
}