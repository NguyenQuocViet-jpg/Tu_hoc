#include <stdio.h>
int main()
{
    int day;
    do{
        scanf("%d", &day);
    }while(day < 2 || day > 8);
    
    if(day = 2) printf("THU HAI");
    else if(day = 3) printf("THU BA");
    else if(day = 4) printf("THU TU");
    else if(day = 5) printf("THU NAM");
    else if(day = 6) printf("THU SAU");
    else if(day = 7) printf("THU BAY");
    else if(day = 8) printf("CHU NHAT");

    
    return 0;
}