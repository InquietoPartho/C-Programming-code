#include <stdio.h>

#define MAX_N 100
#define MAX_K 100

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char opinions[MAX_N][MAX_K+1];  // +1 for the null terminator
        for (int i = 0; i < n; i++) {
            scanf("%s", opinions[i]);
        }

        int max_remaining = 1;  // start with at least one member (yourself)
        for (int mask = 1; mask < (1 << n); mask++) {  // try all possible subsets
            int remaining = 1;  // start with at least one member (yourself)
            for (int j = 0; j < k; j++) {
                int agree = 0, disagree = 0;
                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {  // member i is still in the club
                        if (opinions[i][j] == '+') {
                            agree++;
                        } else {
                            disagree++;
                        }
                    }
                }
                if (disagree > agree) {
                    remaining = 0;
                    break;  // all members who agreed leave the club
                } else if (agree > disagree) {
                    // all members who disagreed leave the club (but keep the neutral ones)
                    for (int i = 0; i < n; i++) {
                        if ((mask & (1 << i)) && (opinions[i][j] == '-')) {
                            mask ^= 1 << i;
                        }
                    }
                }
            }
            if (remaining) {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        count++;
                    }
                }
                if (count > max_remaining) {
                    max_remaining = count;
                }
            }
        }

        printf("%d\n", max_remaining);
    }

    return 0;
}
