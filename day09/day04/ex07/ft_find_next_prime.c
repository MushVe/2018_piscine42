/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:31:33 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/08 17:13:35 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x < nb)
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	cpt;

	cpt = 0;
	while (cpt == 0)
	{
		cpt = ft_is_prime(nb);
		nb++;
	}
	return (nb - 1);
}
