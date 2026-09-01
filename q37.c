#include <stdio.h>

main() {
    int a, b, max;

    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d\n", max);
            break;
        }
        max++;
    }

}