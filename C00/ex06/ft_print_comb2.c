#include <unistd.h>

void    ft_putchars(char a, char b ,char c, char d)
{
    write(1, &a ,1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
}

void    ft_print_combs(char a, char b)
{
    char    c;
    char    d;

    c = a;
    while (c <= '9')
    {
        d = b + 1;
        while (d <= '9')
        {
            ft_putchars(a, b, c, d);
            if (a != '9' || b != '8')
                write(1, ", ", 2);
            ++d;
        }
        ++c;
    }
}

void    ft_print_comb2(void)
{
    char    a;
    char    b;
    
    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            ft_print_combs(a, b);
            ++b;
        }
        ++a;
    }

}
/*
int main(void)
{
    ft_print_comb2();
    return (0);
}*/