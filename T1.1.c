#include <stdio.h>

int main()
{
    int n; 
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("Số nguyên tố <= n là ");
    for(int i = 2; i <= n; i++)
    {
        for(int j = 2; j * j <= n; j++)
        {
            if(i % j == 0){

            }
            else {
                printf("%d ", i);
                break;
            }
        }
    }

    return 0;
}