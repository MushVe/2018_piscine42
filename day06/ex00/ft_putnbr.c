/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 10:54:27 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/08 12:01:45 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	cpt;
	int buff;

	buff = nb;
	cpt = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (buff != 0)
	{
		cpt *= 10;
		buff /= 10;
	}
	cpt /= 10;
	while (cpt)
	{
		ft_putchar((char)(nb / cpt) + '0');
		nb = nb % cpt;
		cpt /= 10;
	}
}
