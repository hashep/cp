#include <iostream>

using namespace std;

class Animal
{
private:
    int food;
    int weight;

public:
    void set_animal(int _food, int _weight)
    {
        food = _food;
        weight = _weight;
    }
    void increase_food(int inc)
    {
        food += inc;
        weight += (inc / 3);
    }
    void view_stat()
    {
        std::cout << "この　どぶつの food   : " << food << std::endl;
        std::cout << "この　どぶつの weight : " << weight << std::endl;
    }
}; // 세미콜론 잊지 말자!

int main()
{
    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);

    animal.view_stat();

    // d
    int AAA;
    std::cin >> AAA;
    return 0;
}