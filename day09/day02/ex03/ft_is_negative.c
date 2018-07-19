/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:45:18 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/07 09:30:09 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char reponse;

	reponse = '0';
	if (n >= 0)
	{
		reponse = 'P';
	}
	else
	{
		reponse = 'N';
	}
	ft_putchar(reponse);
}
