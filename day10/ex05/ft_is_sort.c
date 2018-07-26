/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:25:23 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/26 19:39:44 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int crs;
	int dcr;

	crs = 0;
	dcr = 0;
	i = 1;
	while (length > i)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			crs++;
		if (f(tab[i - 1], tab[i]) < 0)
			dcr++;
		i++;
	}
	if (crs == 0 || dcr == 0)
		return (1);
	return (0);
}

#include <stdio.h>

int	ft_test(int a, int b)
{
	return (a-b);
}

int	main(void)
{
	int	tab1[6] = {0,5,6,8,1,5};
	int	tab2[0] = {};
	int	tab3[6] = {0,5,6,8,9,15};
	int	tab4[6] = {15,0,-5,-6,-8,-15};
	int tab5[3] = {1000, 2, 343};
	int tab6[1] = {5};
	int tab7[2] = {4, 4};

	printf("Tableau 1 (Non trie):\n%d (0 attendu)\n", ft_is_sort(tab1, 6, ft_test));
	printf("Tableau 2 (Vide):\n%d (1 attendu)\n", ft_is_sort(tab2, 0, ft_test));
	printf("Tableau 3 (Tri Croissant):\n%d (1 attendu)\n", ft_is_sort(tab3, 6, ft_test));
	printf("Tableau 4 (Tri Decroissant):\n%d (1 attendu)\n", ft_is_sort(tab4, 6, ft_test));
	printf("Tableau 5 (Non trie);\n%d (0 attendu)\n", ft_is_sort(tab5, 3, ft_test));
	printf("Tableau 6 (Trie);\n%d (1 attendu)\n", ft_is_sort(tab6, 1, ft_test));
	printf("Tableau 7 (Trie);\n%d (1 attendu)\n", ft_is_sort(tab7, 2, ft_test));
		return (0);
}
