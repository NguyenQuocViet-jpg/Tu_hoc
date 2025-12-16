#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Nhập chuỗi str: ");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';
    int t = 0;

    for(int i = 0; i < 50; i++)
    {
        if(str[i] == ' '){
            t++;
        }
    }

    int len = strlen(str);
    printf("Chuỗi có %d dấu cách\n", t);
    printf("Độ dài của chuỗi là: %d", len);

    return 0;
}