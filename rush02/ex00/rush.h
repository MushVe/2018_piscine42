/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdescamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:23:19 by fdescamp          #+#    #+#             */
/*   Updated: 2018/07/22 20:04:27 by fdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		check(char *str);
void	disp_aucune(void);
char	*ft_strcpy(char *dest, char *src);
int		ft_compare(char *str_in, int n_colle, int x, int y);
char	*get_str(int i, int j, char buf, int test);
void	colle_00(int x, int y, char *str);
void	colle_01(int x, int y, char *str);
void	colle_02(int x, int y, char *str);
void	colle_03(int x, int y, char *str);
void	colle_04(int x, int y, char *str);
#endif
