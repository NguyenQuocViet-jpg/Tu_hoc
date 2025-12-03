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
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        
        for(int j = 0; j < m; j++)
        {
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1){
                sum += arr[i][j];
            }
        }
        
    }
    printf("Tổng các giá trị biên: %d ", sum);

    return 0;
}