/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 08:08:12 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/09 08:35:54 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int	buff;

	i = 1;
	while (i < size)
	{
		buff = tab[i];
		j = i;
		while ((j > 0) && (tab[j - 1] > buff))
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = buff;
		i++;
	}
}
