#include <stdio.h>
#include<string.h>

int main()
{
    int t; 
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        int n, k; 
        scanf("%d %d", &n, &k);
        int count = 0;
        int agree = 0; 
        int disagree = 0; 
        for(int j = 0; j < n; j++)
        {
            char opinion[k];
            scanf("%s", opinion);

            for(int l = 0; l <k; l++)
            {
                if(opinion[l] == '+')
                    agree++;
                else
                    disagree++;
            }

            if(agree == 0 || disagree == 0) 
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
