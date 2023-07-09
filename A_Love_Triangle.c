#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int f[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &f[i]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(f[i] == f[j] && f[j] == f[f[i]-1] && i != j && i != f[j]-1){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}