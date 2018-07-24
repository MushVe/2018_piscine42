/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:25:23 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/21 19:22:21 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int neg;

	neg = 0;
	i = 1;
	while (tab[i])
	{
		if (neg >= 0 && f(tab[i - 1], tab[i]) >= 0)
			neg++;
		if (neg <= 0 && f(tab[i - 1], tab[i]) <= 0)
			neg--;
		i++;
	}
	i = i - 2;
	if (i == neg || i == -neg)
		return (1);
	return (0);
}
