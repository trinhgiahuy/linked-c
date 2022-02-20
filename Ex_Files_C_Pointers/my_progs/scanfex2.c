#include <stdio.h>

int main()
{
    int age;
    int *ptr;

    ptr = &age;

    printf("Again, what is your age: ");
    scanf("%d", ptr);

    printf("Your age is: %i\n", *ptr);

    return 0;
}