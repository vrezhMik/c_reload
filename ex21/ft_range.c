/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:13:05 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/13 19:14:31 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*arr;
	int	i;

	i = 0;
	count = max - min + 1;
	arr = (int *)malloc(count * sizeof (int));
	while (i < count)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
