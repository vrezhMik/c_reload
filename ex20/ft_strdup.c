#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++ != 0)
        i++;
    return i;
}

char    *ft_strdup(char *str)
{
    if(!str)
        return NULL;

    int size;
    char *dup;
    int i;

    i = 0;
    size = ft_strlen(str);
    dup = (char *)malloc(size);
    while(i < size)
    {
        dup[i] = str[i];
        i++;
    }
    return (str);
}