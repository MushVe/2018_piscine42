/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:07:59 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/21 16:16:35 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	j;

	j = 0;
	if (!tab)
	{
		return ;
	}
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int main()
{
	char buffer;
	int i = 0;
	char str[40];

	while (read(STDIN_FILENO, &buffer, 1) > 0)
	{
		str[i] = buffer;
		i++;
	}
	str[i] = '\0';

	ft_print_words_tables(ft_split_whitespaces(str));
	return 0;
}
