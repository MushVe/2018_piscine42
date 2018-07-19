/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:59:26 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/13 16:17:48 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int cpt;
	int i;

	i = 0;
	cpt = 0;
	while (dest[cpt])
		cpt++;
	while (src[i] && nb > i)
	{
		dest[cpt] = src[i];
		i++;
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
