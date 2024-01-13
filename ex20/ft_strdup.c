/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:09:48 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/13 19:12:51 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		size;
	char	*dup;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	size = ft_strlen(str);
	dup = (char *)malloc(size);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	return (str);
}
