int     ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        ++i;
    }
    return (1);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_str_is_alpha(argv[1]) ? printf("is Alpha\n") : printf("not Alpha\n");
    }
    return (0);
}*/