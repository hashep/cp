#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    while (true)
    {
        cin >> t;
        cout << "type :: " << t << endl;
        if (cin.fail()) // t입력 = 숫자가아니라 문자 => failbit
        {
            cout << "fuck" << endl;
            cin.clear();           // 플래그들을 초기화 하고
            cin.ignore(100, '\n'); // 개행문자가 나올 때 까지 무시한다
        }
        if (t == 1)
            break;
    }
}