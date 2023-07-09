#include<stdio.h>

int main(){
    long long int n, i, sum=0;
    scanf("%lld", &n);
        if(n%2==0)
            printf("%lld",n/2);
        else{
            long long int result = -(n/2+1);
            printf("%lld",result);
        }
    return 0;
}