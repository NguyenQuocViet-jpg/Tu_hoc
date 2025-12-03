#include <stdio.h>

int main()
{
    int n, m, ap[10][10];
    printf("Nhập n: ");
    scanf("%d", &n);
    printf("Nhập m: ");
    scanf("%d", &m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &ap[i][j]);
        }
    }

    printf("Phần tử lớn nhất trong hàng: ");
    for(int i = 0; i < n; i++)
    {
        int sum = ap[i][0];
        for(int j = 0; j < m; j++)
        {
            if(ap[i][j] > sum)
            {
                sum = ap[i][j];
            }
        }
        printf("%d ", sum);
    }
    

    return 0;
}