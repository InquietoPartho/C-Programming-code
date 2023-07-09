#include <stdio.h>

int main()
{
    int n, q, i, j, k;
    scanf("%d %d", &n, &q);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while (q--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int max = 0;
        for (i = l; i <= r; i++)
        {
            int count = 0;
            for (j = i; j <= r; j++)
            {
                int flag = 0;
                for (k = j - 2; k < j; k++)
                {
                    if (k >= 0 && k < j && a[k] >= a[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    count++;
            }
            if (count > max)
                max = count;
                printf("%d",count);
        }
       
    }
}
