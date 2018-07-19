/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:34:34 by afonck            #+#    #+#             */
/*   Updated: 2018/07/15 13:56:37 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int		g_count = 0;

int		ft_loop3(char **tab, char val, int i, int j)
{
	while (val <= '9')
	{
		if (ft_loop2(tab, val, i, j))
			return (1);
		val++;
	}
	tab[i][j] = '.';
	return (0);
}

int		ft_loop(char **tab, int i, int j)
{
	char val;

	val = '1';
	if (tab[i][j] != '.')
	{
		if (j == 8)
		{
			if (i == 8)
			{
				g_count++;
				return (1);
			}
			else if (ft_loop(tab, i + 1, 0))
				return (1);
		}
		else
			return (ft_loop(tab, i, j + 1));
	}
	return (ft_loop3(tab, val, i, j));
}

int		ft_loop2(char **tab, char val, int i, int j)
{
	if (ft_test(tab, val, i, j))
	{
		tab[i][j] = val;
		if (j == 8)
		{
			if (i == 8)
			{
				g_count++;
				return (1);
			}
			else if (ft_loop(tab, i + 1, 0))
				return (1);
		}
		else
		{
			if (ft_loop(tab, i, j + 1))
				return (1);
		}
	}
	return (0);
}

int		ft_solve(char **tab)
{
	ft_loop(tab, 0, 0);
	if (g_count != 1)
		return (0);
	else
		return (1);
}
