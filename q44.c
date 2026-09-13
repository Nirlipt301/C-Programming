#include <stdio.h>

main() {
    int n;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;

        sum = sum + numerator / denominator;
    }

    printf("%f", sum);

}