#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int t[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    
    int count = 0;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = t[i]; j < t[i] + 15; j++)
        {
            if (j == t[i+1] && i < n - 1)
            {
                break;
            }
            else
            {
                count++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}