/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:25:23 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/26 14:55:47 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int crs;
	int dcr;

	crs = 0;
	dcr = 0;
	i = 1;
	while (length - 1 > i)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			crs++;
		if (f(tab[i - 1], tab[i]) < 0)
			dcr++;
		i++;
	}
	if (crs == 0 || dcr == 0)
		return (1);
	return (0);
}
