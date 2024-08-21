char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        ++i;
    }
    while (i < n)
    {
        dest[i] = '\0';
        ++i;
    }
    return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char dest[10];
    ft_strncpy(dest, "Salut!", 12);
    printf("%s\n", dest);
    return (0);
}*/