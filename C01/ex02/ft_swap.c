void    ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 4;
    printf("a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return (0);

}*/