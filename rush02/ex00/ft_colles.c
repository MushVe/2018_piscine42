/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle-0X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:39:57 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/22 16:51:48 by fdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	colle_04(int x, int y, char *str)
{
	int	i;
	int	j;
	int cpt;

	j = -1;
	cpt = -1;
	while (++j < y && (y > 0 && x > 0))
	{
		i = -1;
		while (++i < x && ++cpt >= 0)
		{
			if ((i == 0 && j == 0) || ((i == x - 1 && j == y - 1)
						&& (j != 0) && (i != 0)))
				str[cpt] = 'A';
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				str[cpt] = 'C';
			else if ((i == 0 || i == x - 1) || (j == 0 || j == y - 1))
				str[cpt] = 'B';
			else
				str[cpt] = ' ';
		}
		str[++cpt] = '\n';
	}
	str[++cpt] = '\0';
}

void	colle_03(int x, int y, char *str)
{
	int	i;
	int	j;
	int cpt;

	j = -1;
	cpt = -1;
	if (x <= 0 || y <= 0)
		return ;
	while (++j < y)
	{
		i = -1;
		while (++i < x && ++cpt >= 0)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				str[cpt] = 'A';
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				str[cpt] = 'C';
			else if ((i == 0 || i == x - 1) || (j == 0 || j == y - 1))
				str[cpt] = 'B';
			else
				str[cpt] = ' ';
		}
		str[++cpt] = '\n';
	}
	str[++cpt] = '\0';
}

void	colle_02(int x, int y, char *str)
{
	int	i;
	int	j;
	int cpt;

	j = -1;
	cpt = -1;
	if (x <= 0 || y <= 0)
		return ;
	while (++j < y)
	{
		i = -1;
		while (++i < x && ++cpt >= 0)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				str[cpt] = 'A';
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				str[cpt] = 'C';
			else if ((i == 0 || i == x - 1) || (j == 0 || j == y - 1))
				str[cpt] = 'B';
			else
				str[cpt] = ' ';
		}
		str[++cpt] = '\n';
	}
	str[++cpt] = '\0';
}

void	colle_01(int x, int y, char *str)
{
	int	i;
	int	j;
	int	cpt;

	j = -1;
	cpt = -1;
	while (++j < y && (y > 0 && x > 0))
	{
		i = -1;
		while (++i < x && ++cpt >= 0)
		{
			if ((i == 0 && j == 0) || ((i == x - 1 && j == y - 1)
						&& (j != 0) && (i != 0)))
				str[cpt] = '/';
			else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
				str[cpt] = '\\';
			else if ((i == 0 || i == x - 1) || (j == 0 || j == y - 1))
				str[cpt] = '*';
			else
				str[cpt] = ' ';
		}
		str[++cpt] = '\n';
	}
	str[++cpt] = '\0';
}

void	colle_00(int x, int y, char *str)
{
	int	i;
	int	j;
	int	cpt;

	j = -1;
	cpt = -1;
	if (x <= 0 || y <= 0)
		return ;
	while (++j < y)
	{
		i = -1;
		while (++i < x && ++cpt >= 0)
		{
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
				str[cpt] = 'o';
			else if (j == 0 || j == y - 1)
				str[cpt] = '-';
			else if ((i == 0 || i == x - 1))
				str[cpt] = '|';
			else
				str[cpt] = ' ';
		}
		str[++cpt] = '\n';
	}
	str[++cpt] = '\0';
}
