#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        long long int n, k;
        scanf("%lld %lld", &n, &k);
        int x = n/2;
        int y = 0;
        while (x >= 0) {
            if ((2*x + k*y) == n) {
                printf("YES\n");
                break;
            }
            y++;
            x--;
        }
        if (x < 0) {
            printf("NO\n");
        }
    }
    
    return 0;
}