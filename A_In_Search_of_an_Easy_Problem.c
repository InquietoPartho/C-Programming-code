#include<stdio.h>

int main()
{

    int x,n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
    
    if(x==1){
        count = 1;
        break;
        }
     }
    if(count==1){
        printf("HARD\n");
    }
    else{
        printf("EASY\n");
    }
    return 0;
}