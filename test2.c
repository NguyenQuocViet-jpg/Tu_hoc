#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char ch[50];

    printf("Nhập chuỗi str: ");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] ='\0';

    printf("Nhập chuỗi ch: ");
    fgets(ch, 50, stdin);
    ch[strcspn(ch, "\n")] = '\0';
    int a = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        for(int k = 0; k < strlen(ch); k++)
        {
            if(str[i] == ch[k])
            {
                printf("Có %c ở index %d\n", ch[k], i);
                a++;
            }
        }
    }

    if(a == 0) printf("Chuỗi ch không có ký tự nào ở chuỗi str");
    return 0;
}