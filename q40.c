#include <stdio.h>

int main() {
    long long binary, temp, comp = 0, place = 1;
    int digit;

    scanf("%lld", &binary);

    temp = binary;
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0) {
            comp += 1 * place;
        }
        temp /= 10;
        place *= 10;
    }

    printf("%lld\n", comp);

    return 0;
}