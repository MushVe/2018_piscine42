/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:03:42 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/24 10:32:38 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	max;

	max = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			max = 1;
			nb = nb + 1;
		}
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	if (max == 1)
	{
		ft_putchar((nb % 10) + '1');
		max = 0;
	}
	else
		ft_putchar((nb % 10) + '0');
}

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	j;

	j = 0;
	if (!tab)
	{
		return ;
	}
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
	}
}
