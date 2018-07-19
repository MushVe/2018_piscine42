/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:34:05 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/18 14:34:10 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_ultimate(int argc, char **argv)
{
	int	i;
	int	j;
	int	size;

	j = 1;
	size = 0;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i])
		{
			size++;
			i++;
		}
		size++;
		j++;
	}
	return (size);
}

char	*ft_affect(char *str, int size, char **argv)
{
	int	x;
	int	i;
	int	j;

	x = 0;
	i = 1;
	while (x < size)
	{
		j = 0;
		while (argv[i][j])
		{
			str[x + j] = argv[i][j];
			j++;
		}
		i++;
		x = x + j;
		str[x] = '\n';
		x++;
	}
	str[x - 1] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*str;

	size = ft_strlen_ultimate(argc, argv);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	str = ft_affect(str, size, argv);
	return (str);
}
