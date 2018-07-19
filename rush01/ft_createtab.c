/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 09:50:02 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/15 11:11:41 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_createtab(char **str)
{
	char	**tab;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if ((tab = (char**)malloc(sizeof(char*) * 10)) == NULL)
		return (NULL);
	while (i <= 9)
	{
		if ((tab[i - 1] = (char*)malloc(sizeof(char) * 10)) == NULL)
			return (NULL);
		while (j <= 8)
		{
			tab[i - 1][j] = str[i][j];
			j++;
		}
		tab[i - 1][j] = '\0';
		j = 0;
		i++;
	}
	return (tab);
}
