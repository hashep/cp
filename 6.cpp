#include <iostream>

class Base
{

public:
    Base() { std::cout << "기반 클래스" << std::endl; }

    virtual void what() { std::cout << "기반 클래스의 what()" << std::endl; }
};
class Derived : public Base
{

public:
    Derived() : Base() /* class Base의 Base()가 사이에 껴있다고 생각하면됨 */ { std::cout << "파생 클래스" << std::endl; }

    void what() { std::cout << "파생 클래스의 what()" << std::endl; }
};
int main()
{
    Base p;    // 기반클
    Derived c; // 기반클+파생클

    Base *p_c = &c; // 아무것도안함
    Base *p_p = &p; // 아무것도안함2

    std::cout << " == 실제 객체는 Base == " << std::endl;
    p_p->what(); // 기반클래스의..

    std::cout << " == 실제 객체는 Derived == " << std::endl;
    p_c->what(); // 파생클래스의..

    return 0;
}