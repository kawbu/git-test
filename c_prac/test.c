#include <stdio.h>
#include <stdlib.h>

int main() {
    int *integer;
    integer = malloc(8);
    integer[0] = 101;
    integer[1] = 102;
    printf("%d\n%p\n%d", integer[0], integer, integer[1]);
    printf("\n%lu", sizeof(*integer));
    free(integer);
    return 0;
}