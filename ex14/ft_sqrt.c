int ft_sqrt(int nb)
{
    int i;

    if(nb <= 0)
        return 0;
    
    i = 1;
    while (i * i < nb)
    {
        if (i > 46340)
				return (0);
			else if (i * i == nb)
				return (i);
			i++;
    }

    if (nb % i == 0)
        return i;

    return 0;
}