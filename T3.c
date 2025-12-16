#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Số sinh viên muốn nhập: ");
    scanf("%d", &n);
    getchar();

    char msv[n][10];
    char ten[n][30];
    float diem[n];

    for(int i = 0; i < n; i++)
    {
        printf("--- Nhập thông tin của sinh viên %d ---\n", i + 1);
        printf("Nhập tên: ");
        fgets(ten[i], 30, stdin);
        ten[i][strcspn(ten[i], "\n")] = '\0';

        printf("Nhập mã sinh viên: ");
        fgets(msv[i], 10, stdin);
        msv[i][strcspn(msv[i], "\n")] = '\0';
        
        printf("Nhập điểm: ");
        scanf("%f", &diem[i]);
        while(getchar() != '\n');
    }

    printf("--- Thông tin sinh viên ---\n");
    printf(" %-10s | %-20s | %-6s \n", "Mã sinh viên", "Họ và Tên", "Điểm");
    for(int i = 0; i < n; i++)
    {
        printf("%-12s | %-20s | %-6.2f \n", msv[i], ten[i], diem[i]);
    }

    return 0;
}