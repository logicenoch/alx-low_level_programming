#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        int *ptr;

        *ptr = 85;
        printf("%d\n", *ptr);
        return EXIT_SUCCESS;
}