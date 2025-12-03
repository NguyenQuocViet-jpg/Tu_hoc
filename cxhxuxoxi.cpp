#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Nhập chuỗi|";
    getline(cin, str);

    int i = 0;
    while(i < str.size())
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }else{
            i++;
        }
    }

    cout << "Chuỗi vừa |" << str << "|";

    return 0;
}