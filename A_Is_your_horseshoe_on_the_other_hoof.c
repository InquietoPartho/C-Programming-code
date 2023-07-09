// #include<stdio.h>

// int main()
// {

//     int arr[4],count=0,i;
//     for(i=0;i<4;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<3;i++){
//         if(arr[i]==arr[i+1]){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }
#include <stdio.h>

int main() 
{
    int s1, s2, s3, s4;
    int count = 0;
    int colors[4];

    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    
    colors[0] = s1;
    colors[1] = s2;
    colors[2] = s3;
    colors[3] = s4;
    for (int i = 0; i < 3; i++) {
            if (colors[i] == colors[i+1]) {
                count++;
            }
        }
    printf("%d\n", count);
    
    return 0;
}