/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:52:11 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/17 16:24:07 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * (max - min - 1))))
		return (0);
	while (min <= max)
	{
		tab[i] = min;
		if (i == 4294967295 || min == 2147483647)
			return (tab);
		i++;
		min++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	return (max - min - 1);
}
