void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    wihle(i < length)
        f(tab[i++]);
}