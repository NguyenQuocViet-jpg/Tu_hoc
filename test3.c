#include <stdio.h>
#include <string.h>

struct sinhvien{
    char msv[10];
    char ten[50];
    float diem;
};
void inputSv(struct sinhvien *f)
{
    printf("Nhập mã sinh viên: ");
    fgets(f->msv, sizeof(f->msv), stdin);
    f->msv[strcspn(f->msv, "\n")] = '\0';

    printf("Nhập tên: ");
    fgets(f->ten, sizeof(f->ten), stdin);
    f->ten[strcspn(f->ten, "\n")] = '\0';

    printf("Nhập điểm: ");
    scanf("%f", &f->diem);
    getchar();
}
void printSv(struct sinhvien *f)
{
    printf("%-12s | %-20s | %-6.2f \n", f->msv, f->ten, f->diem);
}
int main()
{
    int n;
    printf("Số lượng sinh viên: ");
    scanf("%d", &n);
    getchar();

    struct sinhvien sd21301[n];

    for(int i = 0; i < n; i++)
    {
        printf("--- Nhập thông tin sinh viên %d ---\n", i + 1);
        inputSv(&sd21301[i]);
    }

    printf(" %-10s | %-20s | %-6s \n", "Mã sinh viên", "Họ và Tên", "Điểm");

    for(int k = 0; k < n; k++)
    {
        printSv(&sd21301[k]);
    }

    return 0;
}