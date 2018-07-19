/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:58:39 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/19 15:07:31 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define EVEN(nb)	(!(nb % 2))
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN_MSG	"I have an even number of arguments.\n"
# define SUCCESS	0

typedef int	t_bool;

#endif
