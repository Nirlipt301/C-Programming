#include <stdio.h>

main() {
    int n, temp, reversed = 0;

    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    if (n == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}