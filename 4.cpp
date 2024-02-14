#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 10;

    std::cout << *p << std::endl;

    delete p;

    // d
    int AAA;
    std::cin >> AAA;
}