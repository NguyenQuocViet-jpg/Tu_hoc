#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char nguyen[n-1];

    for(int i = 0; i < n - 1; i++)
    {
        scanf("%c", &nguyen[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++)
        {
            if(nguyen[j] - nguyen[i] != 1) printf("%c", nguyen[j]);
        }
    }


    return 0;
}
//1 2 3 5 
 