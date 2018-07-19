/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 10:54:27 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/13 14:29:45 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
