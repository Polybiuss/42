#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long nbr;

    nbr = (long)nb;
    if (nbr < 0)
    {
        nbr = -nbr;
        write(1, "-", 1);
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar((nbr % 10) + '0');
}
/*
int main(void)
{
    ft_putnbr(1234);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    return (0);
}*/