#include <stdio.h>

void giaTri()
{
    int n;
    printf("Số lượng mảng muốn nhập: ");
    scanf("%d", &n);
    int num[n];

    printf("Nhập mảng: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }

    int min = num[0];
    for(int i = 0; i < n; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    printf("Giá trị lớn nhất: %d\n", max);
    printf("Giá trị nhỏ nhất: %d", min);

    return; 
}
int main()
{
    int n;
    printf("Số lượng mảng: ");
    scanf("%d", & n);
    int mang[n];

    printf("Nhập mảng: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &mang[i]);
    }

    int b = 0;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            if(mang[i] > mang[j])
            {
                b = mang[j];
                mang[j] = mang[i];
                mang[i] = b;
            }
            //c = mang[i] > mang[j] ? mang[i] : mang[j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("Vị trí mang[%d] là %d\n", i + 1, mang[i]);
    }
    printf("Giá trị lớn nhất trong mảng là: %d", mang[0]);

    return 0;
}