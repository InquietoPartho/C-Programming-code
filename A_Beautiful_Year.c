#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
	
    while (1) {
        y++;
        int a[10] = {0};
        int temp = y;
        int count = 0;
        while (temp > 0) {
            int digit = temp % 10;
            if (a[digit] == 0) {
                a[digit] = 1;
                count++;
            }
            temp /= 10;
        }
        if (count == 4) {
            printf("%d", y);
            break;
        }
    }
    return 0;
}