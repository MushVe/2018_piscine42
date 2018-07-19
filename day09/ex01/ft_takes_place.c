/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 07:53:06 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/13 08:48:19 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_disp(int hour)
{
	char	tmp;

	if (hour == 0)
		hour = 12;
	if (hour == 25)
		hour = 1;
	if (hour > 12)
		hour -= 12;
	if (hour > 9)
	{
		tmp = hour / 10 + '0';
		write(1, &tmp, 1);
		tmp = hour % 10 + '0';
	}
	else
		tmp = hour + '0';
	write(1, &tmp, 1);
}

void	ft_takes_place(int hour)
{
	char	tmp;
	int		pm;

	pm = 0;
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour > 12)
		pm = 1;
	ft_disp(hour);
	if (pm == 0)
		write(1, ".00 A.M AND ", 12);
	else
		write(1, ".00 P.M AND ", 12);
	ft_disp(hour + 1);
	if (hour + 1 > 12)
		pm = 1;
	else
		pm = 0;
	if (pm == 0 || (hour + 1 > 24))
		write(1, ".00 A.M.", 8);
	else
		write(1, ".00 P.M.", 8);
}
