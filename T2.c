#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int str[n];

    for(int i = 0; i < n; i++)
    {
        printf("Nhập mảng str[%d]: ", i);
        scanf("%d", &str[i]);
    }

    int k =0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] % 2 == 0){
            printf("Các số chẵn là: %d\n", str[i]);
            k++;
        }
    }
    if(k == 0) printf("Không có số chẵn trong chuỗi");

    return 0;
}