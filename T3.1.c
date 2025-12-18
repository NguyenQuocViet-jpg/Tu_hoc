#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Số lượng xe muốn nhập: ");
    scanf("%d", &n);
    while(getchar() != '\n');

    char hang[n][30];
    char ten[n][30];
    float gia[n];

    
    for(int i = 0; i < n; i++)
    {
        printf("--- Nhập thông tin xe %d ---\n", i + 1);
        printf("Hãng xe: ");
        fgets(hang[i], sizeof(hang[i]), stdin);
        hang[i][strcspn(hang[i], "\n")] = '\0';

        printf("Tên xe: ");
        fgets(ten[i], sizeof(ten[i]), stdin);
        ten[i][strcspn(ten[i], "\n")] ='\0';

        printf("Nhập giá tiền: ");
        scanf("%f", &gia[i]);
        while(getchar() != '\n');
    }

    printf("%-20s | %-20s | %s\n", "Hãng xe", "Tên xe", "Giá tiền");
    for(int i = 0; i < n; i++)
    {
        printf("%-20s | %-20s | %f\n", hang[i], ten[i], gia[i]);
    }

    return 0;
}