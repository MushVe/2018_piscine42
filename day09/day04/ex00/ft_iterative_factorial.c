/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:24:54 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/10 12:47:48 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || !nb || nb > 13)
		return (0);
	while (nb > 0)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
