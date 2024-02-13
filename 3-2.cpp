#include <iostream>

using namespace std;

int main()
{
    int x;
    int &y = x;
    int &z = y; // &&z = &x 이렇게낳지않는다문법저금지 &&두번안됨

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    // d
    int AAA;
    std::cin >> AAA;
}