/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 11:13:29 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/26 16:55:45 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*opp;
	void	(*opp_ft)(int, int);
}				t_opp;

int				ft_strcmp(char *s1, char *s2);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);

#endif
