int     ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < ' ' || str[i] > '~')
            return (0);
        ++i;
    }
    return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char *str = "qfqff\nrq";
    ft_str_is_printable(str) ? printf("printable\n") : printf("not printable\n");
    return (0);
}*/