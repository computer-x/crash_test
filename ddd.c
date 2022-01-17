int read4(int *a);

int read3(int *a)
{
    *a = 1;
    return (*a + read4(a + 1));
}
