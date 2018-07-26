/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:46:08 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/26 16:53:01 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putnbr(0);
}

void	ft_calc(int a, int b, char *sign)
{
	int		i;
	int		v;

	i = -1;
	v = 0;
	while (++i < 6)
	{
		if (ft_strcmp(g_opptab[i].opp, sign) == 0)
		{
			g_opptab[i].opp_ft(a, b);
			v++;
		}
	}
	if (v == 0)
		ft_putnbr(0);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_calc(a, b, argv[2]);
	return (0);
}
