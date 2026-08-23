#include <stdio.h>

main() {
    int total, hours, minutes, seconds;

    scanf("%d", &total);

    hours = total / 3600;
    total = total % 3600;

    minutes = total / 60;
    seconds = total % 60;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

}