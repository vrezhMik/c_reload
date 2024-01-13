/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:07:32 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/13 19:09:10 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			i = 0;
			while (argv[count][i] != '\0')
				ft_putchar(argv[count][i++]);
			ft_putchar('\n');
			count++;
		}
	}
}
