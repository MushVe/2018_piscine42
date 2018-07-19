/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:45:20 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/16 17:46:42 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int m;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		m = i;
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[m]);
		}
		i = m + 1;
	}
	return (0);
}
