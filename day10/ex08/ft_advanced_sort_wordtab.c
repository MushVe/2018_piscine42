/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:09:43 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/26 17:55:58 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	char*buff;

	i = 1;
	while (tab[i] != '\0')
	{
		buff = tab[i];
		j = i;
		while ((j > 0) && (cmp(buff, tab[j - 1]) < 0))
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = buff;
		i++;
	}
}
