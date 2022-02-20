#include <stdio.h>

int main()
{

    // use 4 variables
    char a;
    char *x;
    int b;
    int *y;

    // output addresses of a & b
    printf("The address of variable a: %p\n", &a);
    printf("The address of variable b: %p\n", &b);

    // init ptrs x & y to corresponding variables
    x = &a;
    y = &b;

    // output the addresses stored in each pointer variable
    printf("The address stored in x: %p\n", x);
    printf("The address stored in y: %p\n", y);

    return 0;
}