#include <iostream>
#include <string.h>

using namespace std;

class Marine
{
    int hp;               // 마린 체력
    int coord_x, coord_y; // 마린 위치
    bool is_dead;

    const int default_damage; // 기본 공격력

public:
    Marine();             // 기본 생성자
    Marine(int x, int y); // x, y 좌표에 마린 생성

    int attack();                      // 데미지를 리턴한다.
    void be_attacked(int damage_earn); // 입는 데미지
    void move(int x, int y);           // 새로운 위치

    void show_status(); // 상태를 보여준다.
};

Marine::Marine()
    : hp(50), coord_x(0), coord_y(0), default_damage(50), is_dead(false) {}
Marine::Marine(int x, int y)
    : hp(50), coord_x(x), coord_y(y), default_damage(50), is_dead(false) {}

int Marine::attack() { return default_damage; }
void Marine::be_attacked(int damage_earn)
{
    hp -= damage_earn;
    if (hp <= 0)
    {
        is_dead = true;
    }
}
void Marine::move(int x, int y)
{
    coord_x = x;
    coord_y = y;
}

void Marine::show_status()
{
    cout << " *** Marine *** " << endl;
    cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
         << endl;
    cout << " HP : " << hp << "\n"
         << endl;
    if (hp <= 0)
    {
        cout << "This marine is DED\n"
             << endl;
    }
}

int main()
{
    Marine marine1(1, 2);
    Marine marine2(3, 4);

    marine1.show_status();
    marine2.show_status();

    std::cout << std::endl
              << "1 Attacked 2!\n"
              << std::endl;

    marine1.be_attacked(marine2.attack());

    marine1.show_status();
    marine2.show_status();

    marine2.be_attacked(marine1.attack());

    marine1.show_status();
    marine2.show_status();

    marine1.be_attacked(marine2.attack());

    marine1.show_status();
    marine2.show_status();

    //
    int AAA;
    std::cin >> AAA;
    return 0;
}