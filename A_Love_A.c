#include <stdio.h>
#include <string.h>

int main(){
    char s[51];
    scanf("%s", s);
    int a_count = 0;
    int i;
    for (i = 0; i < strlen(s); i++){
        if (s[i] == 'a'){
            a_count++;
        }
    }
    int ans = 0;
    for (i = 0; i < strlen(s); i++){
        if (s[i] != 'a'){
            int a_count_temp = a_count - (strlen(s) - a_count);
            if (a_count_temp > (strlen(s) - i - 1) / 2){
                ans = i;
            }
        }
    }
    printf("%d", ans);
    return 0;
}