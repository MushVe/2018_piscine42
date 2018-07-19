/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:54:45 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/13 15:42:31 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	fmax;

	i = 0;
	j = 0;
	fmax = 0;
	while (to_find[fmax])
		fmax++;
	while (str[i])
	{
		while (str[i] == to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (j == fmax)
			return (&str[i - fmax]);
		j = 0;
		i++;
	}
	return (NULL);
}
