/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:51:24 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/12 17:14:38 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_chaine(char *s)
{
	s[0] = 'T';
	s[1] = 'u';
	s[2] = 't';
	s[3] = ' ';
	s[4] = 't';
	s[5] = 'u';
	s[6] = 't';
	s[7] = ' ';
	s[8] = ';';
	s[9] = ' ';
	s[10] = 'T';
	s[11] = 'u';
	s[12] = 't';
	s[13] = ' ';
	s[14] = 't';
	s[15] = 'u';
	s[16] = 't';
	s[17] = '\n';
}

void	ft_generic(void)
{
	char	gen[18];
	int		i;

	i = 0;
	ft_chaine(gen);
	while (gen[i])
	{
		write(1, &gen[i], 1);
		i++;
	}
}
