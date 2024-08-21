int     ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        ++i;
    }
    return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char *str = "";
    ft_str_is_uppercase(str) ? printf("uppercase\n") : printf("not uppercase\n");
    return (0);
}*/