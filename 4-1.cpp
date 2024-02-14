#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    delete &a;

    int arr_size;

    std::cout << "array size : ";
    std::cin >> arr_size;

    int *list = new int[arr_size];

    for (int i = 1; i < arr_size + 1; i++)
    {
        std::cin >> list[i];
    }
    for (int i = 1; i < arr_size + 1; i++)
    {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }

    delete[] list;

    // d
    int AAA;
    std::cin >> AAA;
}