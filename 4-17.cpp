#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
    char *string_content; // 문자열 데이터를 가리키는 포인터
    int string_length;    // 문자열 길이

    int memory_capacity;

public:
    // capacity 만큼 미리 할당함.
    MyString(int capacity);

    // 문자열로 부터 생성
    MyString(const char *str);

    // 복사 생성자
    MyString(const MyString &str);

    ~MyString();

    int length() const;
};

MyString::MyString(int capacity) // int니까 숫자 입력시 이걸로감
{
    /* 입력값 = capcity */
    cout << capacity << endl;
    cout << string_content << endl;
    cout << string_length << endl;
    cout << memory_capacity << endl;
    cout << "\ndddd\n"
         << endl;

    string_content = new char[capacity]; // string_content에 입력값 넣음
    string_length = 0;                   // string_length = 0
    memory_capacity = capacity;          // memory_capacity에도 입력값 넣음

    cout << capacity << endl;
    cout << string_content << endl;
    cout << string_length << endl;
    cout << memory_capacity << endl;
}

MyString::MyString(const char *str) // char 니까 ""로된 문자입력시 이걸로감
{
    cout << string_content << endl;
    cout << string_length << endl;
    cout << memory_capacity << endl;
    cout << str << endl;

    string_length = 0;
    while (str[string_length++])
    {
    }

    string_content = new char[string_length];
    memory_capacity = string_length;

    for (int i = 0; i != string_length; i++)
        string_content[i] = str[i];

    cout << string_content << endl;
    cout << string_length << endl;
    cout << memory_capacity << endl;
    cout << str << endl;
}
MyString::MyString(const MyString &str)
{
    string_length = str.string_length;
    string_content = new char[string_length];

    for (int i = 0; i != string_length; i++)
        string_content[i] = str.string_content[i];

    cout << "watdafak " << endl;
    cout << "watdafak2" << endl;
}
MyString::~MyString() { delete[] string_content; }
int MyString::length() const { return string_length; }

int main()
{
    MyString s("dkd"); // MyString::MyString(int capacity) // Date day(2011, 3, 1);

    //
    int AAA;
    cin >> AAA;
    return 0;
}