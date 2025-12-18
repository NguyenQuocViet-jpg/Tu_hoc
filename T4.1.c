#include <stdio.h>
#include <string.h>

struct xemay{
    char hang[30];
    char ten[30];
    float gia;
};
void input(struct xemay *i)
{
    printf("Hãng xe: ");
    fgets(i->hang, sizeof(i->hang), stdin);
    i->hang[strcspn(i->hang, "\n")] = '\0';

    printf("Tên xe: ");
    fgets(i->ten, sizeof(i->ten), stdin);
    i->ten[strcspn(i->ten, "\n")] ='\0';

    printf("Nhập giá tiền: ");
    scanf("%f", &i->gia);
    while(getchar() != '\n'); 
}
void print(struct xemay i, int n)
{
    printf("%-20s | %-20s | %f\n", i.hang, i.ten, i.gia); 
}
void sapxep(struct xemay i[], int n)
{
    struct xemay temp;
    for(int h = 0; h < n; h++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i[h].gia < i[j].gia)
            {
                temp = i[j];
                i[j] = i[h];
                i[h] = temp;
            }
        }
    }
}
int main()
{
    int n; 
    printf("Số lượng xe muốn nhập: ");
    scanf("%d", &n);
    while(getchar() != '\n');

    struct xemay d[n];

    for(int i = 0; i < n; i++)
    {
        printf("--- Nhập thông tin xe %d ---\n", i + 1);
        input(&d[i]);
    }

    sapxep(d, n);

    printf("%-20s | %-20s | %s\n", "Hãng xe", "Tên xe", "Giá tiền");
    for(int i = 0; i < n; i++)
    {
        print(d[i], n);
    }

    return 0;
}