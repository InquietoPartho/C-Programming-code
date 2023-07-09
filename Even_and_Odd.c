#include<stdio.h>

int main()
{

    int n,i,evensum=0,oddsum=0;
    scanf("%d",&n);
    int arr[n];

    for( i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evensum +=arr[i];
        }
        else{
            oddsum += arr[i];
        }
    }

    printf("%d %d",evensum,oddsum);
    return 0;
}