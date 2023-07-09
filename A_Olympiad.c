#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                flag++;
            }
        }
        if (flag == n && a[i] != 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}