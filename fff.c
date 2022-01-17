int read6(int *a);

int read5(int *a)
{
    *a = 1;
    return (*a + read6(a + 1));
}
