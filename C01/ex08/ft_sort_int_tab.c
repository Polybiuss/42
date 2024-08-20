void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[j];
                tab[j] = tab[i];
                tab[i] = tmp;
            }
            ++j;
        }
        ++i;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int tab[] = {2, 5, 4, 3, 1, -1};
    int size = 0;
    int i = 0;
    while (tab[size] != -1)
        ++size;
    while (i < size)
    {
        printf("%d\n", tab[i]);
        ++i;
    }
    ft_sort_int_tab(tab, size);
    i = 0;
    while (i < size)
    {
        printf("%d\n", tab[i]);
        ++i;
    }
    return (0);
}*/