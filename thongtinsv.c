#include <stdio.h>

int main()
{
    int d;
    printf("Số lượng sinh viên muốn nhập: ");
    scanf("%d", &d);

    float diem[d];

    int z = 1; 
    for(int i = 0; i < d; i++)
    {
        printf("Nhập điểm của sinh viên %d: ", z);
        scanf("%f", &diem[i]);
        z++;
    }

    int b = 0;
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if(diem[i] < diem[j])
            {
                b = diem[i];
                diem[i] = diem[j];
                diem[j] = b;
            }
        }
    }
    int m = 1;
    //printf("điểm sắp xếp theo giảm dần: ");
    for(int i = 0; i < d; i++)
    {
        printf("Vị trí thứ %d là %.2f\n", m, diem[i]);
        m++;
    }

    return 0;
}