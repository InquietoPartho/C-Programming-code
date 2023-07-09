#include<stdio.h>

int main() 
{ 
    int n; 
    scanf("%d", &n); 
  
    char moves[n]; 
    scanf("%s", moves); 
  
    int count = 0; 
  
    for (int i = 0; i < n; i++) { 
  
        if (moves[i] == 'R' && moves[i + 1] == 'U') { 
            count++; 
            i++; 
        } 
        else if (moves[i] == 'U' && moves[i + 1] == 'R') { 
            count++; 
            i++; 
        } 
    } 
  
    printf("%d\n", n-count); 
  
    return 0; 
}