#include <iostream>

using namespace std;

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main()
{
    int a = 1;
    char b = 'b';
    double c = 2;

    print(a);
    print(b);
    print(c);

    //
    int AAA;
    std::cin >> AAA;
    return 0;
}