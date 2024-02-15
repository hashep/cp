#include <iostream>
#include <string.h>

using namespace std;

class Test
{
    char c;

public:
    Test(char _c)
    {
        c = _c;
        std::cout << "생성자 호출 " << c << std::endl;
    }
    ~Test() { std::cout << "소멸자 호출 " << c << std::endl; }
};

int main()
{
    Test b('b');

    //
    int AAA;
    std::cin >> AAA;
    return 0;
}

/* 자동으로 delete 가 되는 경우는 없습니다.
다시 말해서 우리가 동적으로 할당했던 저 name 은 영원히 메모리 공간 속에서 둥둥 떠다닌다는 말이지요.
사실 몇 바이트 정도 밖에 되지 않을 것이지만 위와 같은 name 들이 쌓이고 쌓이게 되면 메모리 누수 (Memory Leak)
이라는 문제점이 발생하게 됩니다 (가끔 몇몇 프로그램들이 비정상적으로 많은 메모리를 점유하는 것 보이시지 않나요?) */