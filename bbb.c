int read2(int *a);

int read1(int *a)
{
    *a = 1;
    return (*a + read2(a + 1));
}
