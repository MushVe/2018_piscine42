/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:42:11 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/24 13:13:56 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(*s) * (ft_strlen(src) + 1))))
		return (0);
	return (ft_strcpy(s, src));
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*p;
	int			i;

	p = NULL;
	i = -1;
	if (!(p = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (++i < ac)
	{
		p[i].size_param = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		p[i].tab = ft_split_whitespaces(av[i]);
	}
	p[i].str = 0;
	return (p);
}
