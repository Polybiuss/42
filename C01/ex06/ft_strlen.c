int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d\n", ft_strlen(argv[1]));
    }
    return (0);
}*/