#include<stdio.h>

int main()
{

    int t;
    scanf("%d",&t);
    int count=0;
    while(t--){
        int p,q;
        scanf("%d %d",&p,&q);
        if(q-p>=2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}