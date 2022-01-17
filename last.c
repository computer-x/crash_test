#include <stdio.h>



//int read3(int *a);

int read6(int *a)
{
    *a = 1;
    *(a + 1) = 1;

    int *b = NULL;
    *b = 1;


    return (*a + *(a + 1));
}
