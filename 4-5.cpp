#include <iostream>

using namespace std;

int main()
{
    int a = 999;
    int b;

    cout << "enter value :";

    while (1)
    {

        try
        {
            cin >> b;

            if (2000 <= b && b <= 2026) // 2000 < b < 2026 이지랄하면죽임
            {
                break;
            }
            else
            {
                throw b;
            }
        }
        catch (int b_throw)
        {
            std::cout << "u just typed " << b_throw << ", only 2000~2025" << std::endl;
        }
    }

    std::cout << a / b << std::endl;

    //
    int AAA;
    std::cin >> AAA;
    return 0;
}