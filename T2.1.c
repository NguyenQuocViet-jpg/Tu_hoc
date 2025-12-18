#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];

    printf("Nhập chuỗi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int nguyenam = 0, phuam = 0, cach = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if(c >= 'A' && c <= 'Z')
        {
            c += 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            nguyenam++;
        }else{
            phuam++;
        }
        if(c == ' ')
        {
            cach++;
        }
    }
    int i = strlen(str);
    printf("Số nguyên âm là: %d\n", nguyenam);
    printf("Số phụ âm là: %d\n", phuam);
    printf("Số dấu cách: %d\n", cach);
    printf("Độ dài của chuỗi là: %d", i);
    
    return 0;
}
