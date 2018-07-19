/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:31:06 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/07 09:30:42 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_suite(char *t)
{
	if (t[1] == 58)
	{
		t[1] = 48;
		t[0]++;
	}
	if (((t[0] != t[2]) || (t[1] != t[3])) && (t[0] + t[1] < t[2] + t[3]))
	{
		ft_putchar(t[0]);
		ft_putchar(t[1]);
		ft_putchar(t[4]);
		ft_putchar(t[2]);
		ft_putchar(t[3]);
		if ((t[0] + t[2] + t[3] != 171) || (t[1] != 56))
		{
			ft_putchar(t[5]);
			ft_putchar(t[4]);
		}
	}
}

void	ft_print_comb2(void)
{
	char	tab[6];

	tab[0] = 48;
	tab[1] = 48;
	tab[2] = 48;
	tab[3] = 48;
	tab[4] = 32;
	tab[5] = 44;
	while ((tab[0] + tab[2] + tab[3] != 171) || (tab[1] != 56))
	{
		tab[3]++;
		if (tab[3] == 58)
		{
			tab[3] = 48;
			tab[2]++;
		}
		if (tab[2] == 58)
		{
			tab[2] = 48;
			tab[1]++;
		}
		ft_print_suite(tab);
	}
}
