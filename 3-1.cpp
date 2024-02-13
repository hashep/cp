#include <iostream>

using namespace std;

int change_val(int &p)
{
    p = 3;
}

int main()
{
    int number = 5;

    std::cout << number << std::endl;
    change_val(number); // number를 3으로 바꾼다
    std::cout << number << std::endl;

    // d
    int AAA;
    std::cin >> AAA;
}