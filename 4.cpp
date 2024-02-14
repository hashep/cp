#include <iostream>

using namespace std;

typedef struct Animal
{
    char name[30]; // 이름
    int age;       // 나이

    int health; // 체력
    int food;   // 배부른 정도
    int clean;  // 깨끗한 정도
} Animal;

int main()
{
    int a = 5;

    delete &a; // ?

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