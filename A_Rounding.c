#include <stdio.h>

int main() 
{
    int n; 
    scanf("%d", &n); 
    if (n % 10 == 0) { 
        printf("%d", n); 
    } 
    // else if(n% 10!=0){
    //       printf("%d", (n/10) * 10);
    
    else { 
        printf("%d", (n/10) * 10); 
    } 
    return 0; 
}