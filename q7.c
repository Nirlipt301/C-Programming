#include <stdio.h>

main() {
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

}