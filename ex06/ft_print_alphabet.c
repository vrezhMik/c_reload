/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:42:05 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/14 16:42:38 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while (t <= 'z')
	{
		ft_putchar(t);
		t = t + 1;
	}
}
