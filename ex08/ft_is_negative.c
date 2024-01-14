/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:43:13 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/14 16:43:53 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	ft_is_negative(int n)
{
	if (n >= 0 || !n)
		ft_putchar('P');
	else
		ft_putchar('N');
}
