/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:56:21 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/07 09:29:54 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		nbr;
	char	car;

	nbr = 0;
	car = '0';
	while (nbr < 10)
	{
		ft_putchar(car);
		nbr++;
		car++;
	}
}
