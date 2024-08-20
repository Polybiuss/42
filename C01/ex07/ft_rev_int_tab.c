void    ft_rev_int_tab(int *tab, int size)
{
    int     i;
    int     tmp;

    i = 0;
    while (i < size / 2)
    {
        tmp = tab[size - i - 1];
        tab[size - i - 1] = tab[i];
        tab[i] = tmp;
        ++i;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int tab[] = {1, 2 ,3, 4, 5, -1};
    int size = 0;
    int i = 0;
    while (tab[size] != -1)
        ++size;
    printf("size = %d\n", size);
    while (i <  size)
    {
        printf("%d\n", tab[i]);
        ++i;
    }
    ft_rev_int_tab(tab, size);
    i = 0;
    while (i < size)
    {
        printf("%d\n", tab[i]);
        ++i;
    }
    return (0);
}*/
