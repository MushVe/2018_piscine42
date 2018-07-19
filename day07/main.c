/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:07:52 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/17 15:08:30 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	for (int i = 0; i <= (atoi(argv[2]) - atoi(argv[1]) - 1); i++)
		printf("%d\n", ft_range(atoi(argv[1]), atoi(argv[2]))[i]);
	return 0;
}
