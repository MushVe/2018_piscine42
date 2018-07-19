/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:07:59 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/19 12:01:16 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	j;

	j = 0;
	if (!tab)
		return;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		printf("%s", tab[j]);
		j++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char tab[6];
//	char s[] = {' ','a','b',' ','b','e',' ','\0'};
//	tab = ft_split_whitespaces(s);
	tab[0] = ' ';
	tab[1] = 'l';
	tab[2] = 'o';
	tab[3] = 'l';
	tab[4] = ' ';
	tab[5] = '\0';

	char **array = ft_split_whitespaces(tab);
	ft_print_words_tables(array);
	return 0;
}
