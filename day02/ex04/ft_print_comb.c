/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 11:22:36 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/07 09:30:29 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_suite(char uno, char dos, char tres)
{
	char	c[2];

	c[0] = 44;
	c[1] = 32;
	if ((uno < dos) && (dos < tres))
	{
		ft_putchar(uno);
		ft_putchar(dos);
		ft_putchar(tres);
		if ((uno + dos + tres) != 168)
		{
			ft_putchar(c[0]);
			ft_putchar(c[1]);
		}
	}
}

void	ft_print_comb(void)
{
	char	count[3];

	count[0] = 48;
	count[1] = 49;
	count[2] = 50;
	while ((count[0] + count[1] + count[2]) <= 168)
	{
		ft_print_suite(count[0], count[1], count[2]);
		count[2]++;
		if (count[2] == 58)
		{
			count[2] = 48;
			count[1]++;
		}
		if (count[1] == 58)
		{
			count[1] = 48;
			count[0]++;
		}
	}
}
