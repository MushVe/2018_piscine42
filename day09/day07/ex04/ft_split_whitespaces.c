/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:14:23 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/19 11:55:59 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
	int x;
	int ccmot;

	while (str[i])
	{
		ccmot = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		while (str[i++] && str[i++] != ' '
				&& str[i++] != '\t' && str[i++] != '\n')
			ccmot++;
		if (ccmot && !(tab[j] = (char*)malloc(sizeof(char) * (ccmot + 1))))
			return (NULL);
		x = 0;
		while (ccmot > x++)
			tab[j][x] = str[i - ccmot + x];
		if (ccmot)
			tab[j][x] = '\0';
		j++;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = -1;
	if (str == NULL)
		return (NULL);
	write(1, "1", 1);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_nstr(str) + 1))))
		return (NULL);
	write(1, "2", 1);
	tab[ft_nstr(str) + 1] = NULL;
	write(1, "3", 1);
	if (!(tab = ft_loop(tab, str, i, j)))
		return (NULL);
	return (tab);
}
