#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my_list[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("Pointer address [%i]: %p\n", i, &my_list[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Array value[%i]: %i\n", j, *(my_list + j));
    }

    char *storage = malloc(sizeof(char) * 16);
    if (storage == NULL)
    {
        fprintf(stderr, "Allocation failed\n");
        exit(1);
    }
    printf("Allocated successfully!\n");

    free(storage);

    return 0;
}