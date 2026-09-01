#include <stdio.h>

main() {
    int n, digit;
    long long product = 1;
    int hasOdd = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd) {
        printf("%lld\n", product);
    } else {
        printf("0\n");
    }

}