void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmpa;
    int tmpb;
    tmpa = *a;
    tmpb = *b;
    *a = tmpa / tmpb;
    *b = tmpa % tmpb;
}
/*
#include <stdio.h>
int main(void)
{
    int a = 5;
    int b = 2;
    printf("a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d, b = %d\n", a ,b);
    return (0);
}*/