#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // 파일 읽기 준비
    std::ifstream in("good document.txt");
    std::string s;

    if (in.is_open())
    {
        in >> s;
        std::cout << "text :: " << s << std::endl;
    }
    else
    {
        std::cout << "no file!" << std::endl;
    }
    return 0;
}