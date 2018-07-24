/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:22:42 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/24 17:08:11 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (!s1[i] && !s2[i])
			return (0);
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*buff;

	i = 1;
	while (tab[i] != '\0')
	{
		buff = tab[i];
		j = i;
		while ((j > 0) && (ft_strcmp(buff, tab[j - 1]) < 0))
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = buff;
		i++;
	}
}
