#include <stdio.h>

main() {
    int n, temp, sum = 0, digit, count = 0;

    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= digit;
        }
        sum += p;
        temp /= 10;
    }

    if (sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
}