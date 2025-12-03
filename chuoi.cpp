#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Nhập chuỗi|";
    getline(cin, str);

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    if(str[0] != ' ') 
    {
        str[0] -= 32;
    }
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            str[i + 1] -= 32;
        }
    }

    cout << "Chuỗi nhập|" << str << "|";
}