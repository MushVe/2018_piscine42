/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:27:04 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/09 11:16:46 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if ((index <= 1) || (index == 0))
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
