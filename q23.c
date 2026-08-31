#include <stdio.h>

main() {
    int days;

    scanf("%d", &days);

    if (days <= 5) {
        printf("Fine - Rs. %d\n", days * 2);
    } else if (days <= 10) {
        printf("Fine - Rs. %d\n", (5 * 2) + (days - 5) * 4);
    } else if (days <= 30) {
        printf("Fine - Rs. %d\n", (5 * 2) + (5 * 4) + (days - 10) * 6);
    } else {
        printf("Membership Cancelled\n");
    }

}