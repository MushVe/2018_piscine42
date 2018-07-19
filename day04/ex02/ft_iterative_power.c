/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:29:39 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/09 16:47:41 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		res = nb * res;
		power--;
	}
	return (res);
}
