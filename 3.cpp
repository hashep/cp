#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int &a2 = a;

    cout << a << endl;
    cout << a2 << endl;

    a2 = 5; // a2 = a = 5;

    cout << a << endl;
    cout << a2 << endl;

    int c = 10;
    int *p = &c; // p는 c의주소

    int d = 5;
    p = &d; // p는 d의주소

    // d
    int AAA;
    std::cin >> AAA;
}