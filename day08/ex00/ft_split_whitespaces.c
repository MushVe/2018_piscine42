/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:14:23 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/20 15:47:10 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nstr(char *str)
{
	int	nb;
	int	res;
	int	i;

	res = 0;
	i = 0;
	nb = 1;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			i++;
			nb++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i++;
			if (nb)
			{
				res++;
				nb = 0;
			}
		}
	}
	return (res);
}

char	**ft_loop(char **tab, char *str, int i, int j)
{
	int	ccmot;
	int	x;

	while (str[i])
	{
		ccmot = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			ccmot++;
			i++;
		}
		if (ccmot && !(tab[j] = (char*)malloc(sizeof(char) * (ccmot))))
			return (NULL);
		x = -1;
		while (ccmot > ++x)
			tab[j][x] = str[i - ccmot + x];
		if (ccmot && ++j > 0)
			tab[j - 1][x] = '\0';
		tab[j] = 0;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_nstr(str) + 1))))
		return (NULL);
	if (!(tab = ft_loop(tab, str, i, j)))
		return (NULL);
	return (tab);
}
