#include <stdio.h>

main() {
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Sum is %d,  Diff is %d,  Product is %d \n Quotient is %.2f",a+b,a-b,a*b,a/b);
}