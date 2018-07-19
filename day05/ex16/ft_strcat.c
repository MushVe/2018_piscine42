/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:52:43 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/13 16:15:37 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int cpt;
	int i;

	i = 0;
	cpt = 0;
	while (dest[cpt])
		cpt++;
	while (src[i])
	{
		dest[cpt] = src[i];
		i++;
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
