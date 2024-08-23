char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        ++i;
    }
    return (str);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_strupcase(argv[1]);
        printf("%s\n", argv[1]);
    }
    return (0);
}
*/