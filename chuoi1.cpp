#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Nhập chuỗi|";
    getline(cin, str);

    //xóa ký khoảng trắng ở đấu chuỗi
    while(str[0] == ' ')
    {
        str.erase(0, 1);
    }
    //xóa khoảng trắng ở cuối chuỗi 
    while(str[str.size() - 1] == ' ')
    {
        str.erase(str.size() - 1, 1);
    }

    //xóa khoảng trắng thừa ở trong chuỗi
    int i = 0; 
    while(i < str.size())
    {
        if(str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }
        else{
            i++;
        }
    }

    //ép chuỗi về ký tự thường
    for(int k = 0; k < str.size(); k++)
    {
        if(str[k] >= 65 && str[k] <= 90)
        {
            str[k] += 32;
        }
    }

    //In hoa ký tự đầu của chuỗi
    if(str[0] != ' ')
    {
        str[0] -= 32;
    }
    for(int j = 0; j < str.size(); j++)
    {
        if(str[j] == ' ' && str[j + 1] != ' ')
        {
            str[j + 1] -= 32;
        }
    }

    cout << "Chuỗi nhập|" << str << "|";

    return 0;
}