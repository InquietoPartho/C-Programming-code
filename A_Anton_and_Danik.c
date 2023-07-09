#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int Anton = 0,Danik = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
            Anton++;
        else if(s[i] == 'D')
            Danik++;
    }
    if(Anton > Danik)
        printf("Anton");
    else if(Danik > Anton)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}