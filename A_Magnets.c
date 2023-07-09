#include<stdio.h>

int main()
{

    int t,count=0;
    scanf("%d",&t);

    int x;
    scanf("%d",&x);

    while(t--){
        int mag;
        scanf("%d",&mag);
        if(mag!=x){
            count++;
            }
            x = mag;     
    }
    printf("%d",count+1);
    return 0;
}