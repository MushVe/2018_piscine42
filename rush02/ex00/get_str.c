/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnielly <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 11:53:15 by pnielly           #+#    #+#             */
/*   Updated: 2018/07/22 20:23:59 by fdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#define BUF_SIZE 400000

char	*get_str(int i, int j, char buf, int test)
{
	char	*buffer;

	if (!(buffer = (char*)malloc(sizeof(char) * (BUF_SIZE))))
		return (0);
	j = 0;
	i = 0;
	test = 0;
	buf = 0;
	read(STDIN_FILENO, buffer, BUF_SIZE);
	return (buffer);
}
