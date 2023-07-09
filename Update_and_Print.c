#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int a, b;
    int i;

    for (i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &a, &b);
    arr[a] = b; 

    for (i = N - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}