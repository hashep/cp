#include <iostream>
#include <string.h>

using namespace std;

class Base
{
    std::string s;

public:
    Base() : s("기반") /* s = "기반" */ { std::cout << "기반 클래스" << std::endl; } // main()에서 'Base 어쩌구' 하면 기본으로 이줄이 실행됨

    void what() { std::cout << s << std::endl; }
};
class Derived : public Base
{
    std::string s;

public:
    Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }

    void what() { std::cout << s << std::endl; }
};
int main()
{
    std::cout << " === 기반 클래스 생성 ===" << std::endl;
    Base AAA; // Base() : s() .....

    AAA.what(); // void what()을 담당, 이게 없으면 "기반"이라는 글자가 나오지 않음

    std::cout << " === 파생 클래스 생성 ===" << std::endl;
    Derived s;

    s.what();

    return 0;
}