void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void swap02(int** xp, int** yp)
{
    int *temp = *xp;
    *xp = *yp;
    *yp = temp;
}