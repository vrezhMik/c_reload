#include <unistd.h>
void ft_putchar(char ch);

int main(int argc, char **argv)
{
    int count;
    int i;
    if (argc > 1)
    {
        count = 1;
        while(count < argc)
        {
            i = 0;
            while(argv[count][i] != '\0')
                ft_putchar(argv[count][i++]);
            ft_putchar('\n');
            count++;
        }
    }
}