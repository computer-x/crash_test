#include <stdio.h>
#include <stdlib.h>

int read1(int *a);

int main(int argc, char *argv[])
{
    int *a = NULL;
    printf("00000\n");
    a = (int *)malloc(2 * sizeof(int));
    printf("11111\n");
    a[0] = 0;
    printf("22222\n");
    a[1] = 1;
    printf("33333\n");
    
    printf("sum = %d\n", read1(a));
    return 0;
}
