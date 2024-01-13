#include <unistd.h>
void ft_putchar(char ch);

void ft_putstr(char *str)
{
    while(*str != '\0')
        ft_putchar(*str++);
}
