#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int i;
    for (i = 0; i < n-1; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            if (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'y') {
                for (int j = i; j < n-1; j++) {
                    s[j] = s[j + 1];
                }
                s[n-1] = '\0';
            }
        }
    }
    printf("%s",s[i]);
}