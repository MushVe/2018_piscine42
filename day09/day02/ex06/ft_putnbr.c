/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:09:07 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/05 17:47:00 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		buff;
	char	c;

	buff = nb;
	c = '0';
	while (nb != 0)
	{
		buff = (buff/1);
	}

	ft_putchar(c);
}

int		main(void)
{
	ft_putnbr(445);
	return (0);
}
