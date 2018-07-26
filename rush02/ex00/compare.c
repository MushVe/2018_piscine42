/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdescamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:15:38 by fdescamp          #+#    #+#             */
/*   Updated: 2018/07/22 16:51:26 by fdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_compare_str(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	if (str1[i] == '\0' && str2[i] == '\0')
		return (1);
	return (0);
}

int		ft_compare(char *str_in, int n_colle, int x, int y)
{
	char *str_colle;

	if (!(str_colle = (char *)malloc(sizeof(char *) * (((x + 1) * y) + 1))))
		return (-1);
	if (n_colle == 0)
	{
		colle_00(x, y, str_colle);
	}
	else if (n_colle == 1)
	{
		colle_01(x, y, str_colle);
	}
	else if (n_colle == 2)
	{
		colle_02(x, y, str_colle);
	}
	else if (n_colle == 3)
	{
		colle_03(x, y, str_colle);
	}
	else
	{
		colle_04(x, y, str_colle);
	}
	return (ft_compare_str(str_in, str_colle));
}
