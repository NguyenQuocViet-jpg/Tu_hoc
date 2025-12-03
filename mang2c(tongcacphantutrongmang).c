#include <stdio.h>

int main()
{
    int n, m, arr[10][10];
    printf("Nhập n: ");
    scanf("%d", &n);
    printf("Nhập m: ");
    scanf("%d", &m);


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            //printf("arr[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
        //printf(" ");
    }

    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            //printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Tong cac phan tu trong mang la: %d", sum);

    return 0;
}