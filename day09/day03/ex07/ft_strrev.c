/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:53:45 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/06 14:29:10 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		taille;
	char	buff;

	taille = 0;
	i = 0;
	buff = '0';
	while (str[taille])
		taille++;
	taille--;
	while (taille > i)
	{
		buff = str[taille];
		str[taille] = str[i];
		str[i] = buff;
		i++;
		taille--;
	}
	return (str);
}
