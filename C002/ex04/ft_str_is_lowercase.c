int     ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] < 'a' || str[i] > 'z')
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
    ft_str_is_lowercase(str) ? printf("lowercase\n") : printf("not lowercase\n");
    return (0);
}*/