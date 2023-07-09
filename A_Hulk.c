#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("I");
        if (i % 2 == 0)
            printf(" hate");
        else
            printf(" love");
        
        if (i < n - 1)
            printf(" that ");
    }
    printf(" it");
    
    return 0;
}