/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnielly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:23:32 by pnielly           #+#    #+#             */
/*   Updated: 2018/07/22 20:40:03 by fdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}

void	ft_display(char *res, int x, int y, int i)
{
	int		count;

	count = 0;
	while (++i < 5)
	{
		if (res[i] == 1 && count > 0)
			write(1, " || ", 4);
		if (res[i] == 1)
		{
			write(1, "[colle-0", 8);
			ft_putnbr(i);
			write(1, "] [", 3);
			ft_putnbr(x);
			write(1, "] [", 3);
			ft_putnbr(y);
			write(1, "]", 1);
			count++;
		}
	}
	if (count == 0)
	{
		disp_aucune();
		return ;
	}
	write(1, "\n", 1);
}

int		nb_line(char *str)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			count++;
		}
		i++;
	}
	return (count);
}

int		nb_col(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		main(void)
{
	int		i;
	int		x;
	int		y;
	char	res[5];
	char	*str;

	if (!(str = get_str(-1, -1, 1, 1)))
		return (0);
	if (!(check(str)))
		disp_aucune();
	y = nb_line(str);
	x = nb_col(str);
	i = 0;
	while (i < 5)
	{
		if (ft_compare(str, i, x, y) == 1)
			res[i] = 1;
		i++;
	}
	ft_display(res, x, y, -1);
}
