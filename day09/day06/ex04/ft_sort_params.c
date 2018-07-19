/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:50:19 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/12 17:26:50 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

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

void	ft_sort(int nb, char **argv)
{
	int		i;
	int		j;
	char	buff[40];

	i = 1;
	while (i < nb)
	{
		*buff = *argv[i];
		j = i;
		while ((j > 0) && ft_strcmp(argv[j - 1], buff))
		{
			argv[j] = ft_strcpy(argv[j], argv[j - 1]);
			j--;
		}
		*argv[j] = *buff;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_sort(argc, argv);
	while (argc > j)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
	return (0);
}
