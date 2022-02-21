#include <stdio.h>

void set(int *a, int *b);

int main()
{
    int a_main, b_main;
    int *a_ptr, *b_ptr;

    a_ptr = &a_main;
    b_ptr = &b_main;

    set(a_ptr, b_ptr);

    printf("a_main is: %i\n", a_main);
    printf("b_main is: %i\n", b_main);

    return 0;
}

void set(int *a, int *b)
{
    *a = 100;
    *b = 5000;
}