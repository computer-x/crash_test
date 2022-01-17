int read3(int *a);

int read2(int *a)
{
    *a = 1;
    return (*a + read3(a + 1));
}
