unsigned int    ft_strlen(char *src)
{
     unsigned int i;

    i = 0;
    while(src[i] != '\0')
        ++i;
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    if (size == 0)
    {
        return (ft_strlen(src));
    }
    i = 0;
    while(i < size - 1)
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}
/*
#include <stdio.h>
int main(void){
    char dest[10];
    char src[] = "Hello, World!";
    ft_strlcpy(dest, src, 10);
    printf("%s\n", dest);
    printf(" tesst :%s\n", src);
    return (0); 
}*/