#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
    char *string_content; // 문자열 데이터를 가리키는 포인터
    int string_length;    // 문자열 길이

public:
    // 문자 하나로 생성
    MyString(char c);

    // 문자열로 부터 생성
    MyString(const char *str);

    // 복사 생성자
    MyString(const MyString &str);

    ~MyString(); // 소멸자

    int length() const;

    void print() const;
    void println() const;
};

// 리팩토링 ↓ レファレンス

// 대괄호 중괄호 괄호 전부 = 등호

MyString::MyString(char c)
{
    string_content = new char[1];
    string_content[0] = c;
}
MyString::MyString(const char *str)
{
    string_length = strlen(str);
    string_content = new char[string_length];

    for (int i = 0; i != string_length; i++)
    {
        string_content[i] = str[i];
    }
}
MyString::MyString(const MyString &str)
{
    string_length = str.string_length;
    string_content = new char[string_length]; // new char = string_length

    for (int i = 0; i != string_length; i++)
        string_content[i] = str.string_content[i]; // string_content = i
}
MyString::~MyString() { delete[] string_content; }
int MyString::length() const { return string_length; }

void MyString::print() const
{
    for (int i = 0; i != string_length; i++)
    {
        cout << string_content[i];
    }
}
void MyString::println() const
{
    for (int i = 0; i != string_length; i++)
    {
        cout << string_content[i];
    }

    cout << endl;
}

int main()
{
    MyString str1("hello world!");
    MyString str2(str1);

    str1.println();
    str2.println();

    //
    int AAA;
    cin >> AAA;
    return 0;
}