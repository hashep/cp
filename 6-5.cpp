#include <iostream>

class Parent
{
public:
    Parent() { std::cout << "Parent 생성자 호출" << std::endl; }
    virtual ~Parent() { std::cout << "Parent 소멸자 호출" << std::endl; }
};
class Child : public Parent
{
public:
    Child() : Parent() { std::cout << "Child 생성자 호출" << std::endl; }
    ~Child() { std::cout << "Child 소멸자 호출" << std::endl; }
};
int main()
{
    std::cout << "--- 평범한 Child 만들었을 때 ---" << std::endl;
    {
        // 이 {} 를 빠져나가면 c 가 소멸된다.
        Child c;
    }
    std::cout << "--- Parent 포인터로 Child 가리켰을 때 ---" << std::endl;
    {
        Parent *p = new Child();
        delete p;
    }
}