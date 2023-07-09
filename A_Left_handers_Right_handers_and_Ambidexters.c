#include <stdio.h>
 
int main()
{
    int l, r, a;
    scanf("%d %d %d", &l, &r, &a);
 
    int total = l + r + a;
    int half = total / 2;
    int res = 0;
 
    if (l >= half) {
        res = 2 * half;
    }
    else if (l + a >= half) {
        res = (l + a) + (half - (l + a));
    }
    else {
        res = l + r;
    }
 
    printf("%d\n", res);
 
    return 0;
}