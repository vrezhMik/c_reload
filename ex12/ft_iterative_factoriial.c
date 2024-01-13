/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoriial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:59:38 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/13 19:01:34 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	result = 1;
	while (nb > 0)
		result *= nb--;
	return (result);
}
