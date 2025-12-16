#include <stdio.h>
#include <string.h>

struct sinhvien{
    char msv[10];
    char ten[30];
    float diem;
};
void inputSv(struct sinhvien *f)
{
    printf("Nhập mã sinh viên: ");
    fgets(f->msv, 10, stdin);
    f->msv[strcspn(f->msv, "\n")] = '\0';

    printf("Nhập tên: ");
    fgets(f->ten, 30, stdin);
    f->ten[strcspn(f->ten, "\n")] = '\0';

    printf("Nhập điểm: ");
    scanf("%f", &f->diem);
    while(getchar() != '\n');
}
void print(struct sinhvien f)
{
    printf("%-15s | %-30s | %-6.2f \n", f.msv, f.ten, f.diem);
}
void sapxep(struct sinhvien f[], int n)
{
    struct sinhvien temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(f[i].diem > f[j].diem)
            {
                temp = f[j];
                f[j] = f[i];
                f[i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Số lượng sinh viên muốn nhập: ");
    scanf("%d", &n);
    getchar();

    struct sinhvien sd21301[n];

    for(int i = 0; i < n; i++)
    {
        printf("--- Nhập thông tin sinh viên %d---\n", i + 1);
        inputSv(&sd21301[i]);
    }

    
    sapxep(sd21301, n);
    

    for(int i = 0; i < n; i++)
    {
        print(sd21301[i]);
    }

    return 0;
}