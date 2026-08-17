#include <stdio.h>

main() {
    float r;
    printf ("Enter radius: ");
    scanf("%f",&r);
    printf("Area= %.2f, Circumferenc= %.2f", 3.14*r*r, 2*3.14*r);
}