#include <stdio.h>

int main()
{
    float x;
    printf("Nhập x: ");
    scanf("%f", &x);
    int a = 1;

    if(x != (int)x) a = 0;
    else {
        if( x < 2 ) a = 0;
        for(int i = 2; i * i <= x; i++)
        {
            if((int)x % i == 0) a = 0;
        }
    }

    if(a == 1) printf("%f là số nguyên tố.\n", x);
    else printf("%f không phải là số nguyên tố.\n", x);

    return 0;
}