char    *ft_str_lowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        ++i;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int i;
    int j;

    str= ft_str_lowcase(str);
    i = 0;
    while (str[i] != '\0')
    {
        j = i - 1;
        if (str[i] >= 'a' && str[i] <= 'z')
            if (!(str[j] >= '0' && str[j] <= '9') && !(str[j] >= 'a' && str[j] <= 'z') && !(str[j] >= 'A' && str[j] <= 'Z'))
                str[i] = str[i] - ( 'a' - 'A');

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
        printf("%s\n", ft_strcapitalize(argv[1]));
    }
    return (0);
}*/