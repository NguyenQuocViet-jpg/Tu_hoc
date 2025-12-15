#include <iostream>
#include <string>
#include <math.h>

bool soNT(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            
            return false;
        }
    }
    
    return true;
}
int tongSoNT(int n)
{
    int tong = 0;
    for(int i = 2; i <= n; i++)
    {
        if(soNT(i)) tong += i;
    }
    return tong;
}
int giaiThua(int n)
{
    if(n < 1) return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int a = 3;

    if(soNT(a)) std::cout << a << " là số nguyên tố." << std::endl;
    else std::cout << a << " không phải là số nguyên tố." << std::endl;

    std::cout << "tổng các số nguyên tố từ 2 -> n là: " << tongSoNT(a) << std::endl;

    std::cout << "Giai thừa của a là: " << giaiThua(a) << std::endl;

    return 0;
}