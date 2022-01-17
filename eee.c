int read5(int *a);

int read4(int *a)
{
    *a = 1;
    return (*a + read5(a + 1));
}
