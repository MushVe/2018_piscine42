/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:46:08 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/24 11:18:38 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_calc(int a, int b, char sign)
{
	if (sign == '+')
		ft_putnbr(a + b);
	else if (sign == '-')
		ft_putnbr(a - b);
	else if (sign == '*')
		ft_putnbr(a * b);
	else if (sign == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(a / b);
	}
	else if (sign == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(a % b);
	}
	else
		ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	if (!(a = ft_atoi(argv[1])))
	{
		ft_putnbr(0);
		return (0);
	}
	if (!(b = ft_atoi(argv[3])))
	{
		ft_putstr(0);
		return (0);
	}
	ft_calc(a, b, argv[2][0]);
	return (0);
}
