#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    put_dec_to_hex(int n)
{
    char *hex;
    
    hex = "0123456789abcdef";

    
    ft_putchar(hex[n / 16]);
    ft_putchar(hex[n % 16]);
}

void    ft_putstr_non_printable(char * str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] > 0 && str[i] < 32) || str[i] == 127)
            {
                write(1, "\\", 1);
                put_dec_to_hex(str[i]);
            }
        else{
            ft_putchar(str[i]);
        }
        ++i;
    }
}
/*
int main(void)
{
    char t = 27;
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    ft_putstr_non_printable(&t);
    return (0);
}*/