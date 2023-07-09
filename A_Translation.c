#include<stdio.h>
#include<string.h>

int main()
{
    char s[101], t[101];
    scanf("%s", s);
    scanf("%s", t);

    int len = strlen(s);
    
    int i, j;
    for (i=0, j=len-1; i<len; i++, j--) {
        if (s[i] != t[j]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
