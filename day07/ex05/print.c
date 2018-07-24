/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:53:05 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/20 11:50:53 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print(char **str)
{
	int i;
	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}

/*int ft_ntrstr(char *str)
  {
  int nb;
  int res;
  int i;

  res = 0;
  i = 0;
  nb = 1;
  while (str[i])
  {
  while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
  {
  i++;
  nb++;
  }
  while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
  {
  i++;
  if (nb)
  {
  res++;
  nb = 0;
  }
  }
  }
  return res;
  }

  char **ft_ntr(char *str)
  {
  int i;
  int j;
  int x;
  int ccmot;
  char **tab;

  j = 0;
  i = 0;
  if (str == NULL)
  return (NULL);
  if (!(tab = (char**)malloc(sizeof(char*) * (ft_ntrstr(str) + 1))))
  return (NULL);
  tab[ft_ntrstr(str) + 1] = NULL;

  while (str[i])
  {
  ccmot = 0;
  while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
  i++;
  while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
  {
  i++;
  ccmot++;
  }
  if (ccmot && !(tab[j] = (char*)malloc(sizeof(char) * (ccmot + 1))))
  return (NULL);
  x = 0;
//printf("ccmot %d\n", ccmot);
while (ccmot > x)
{
tab[j][x] = str[i - ccmot + x];
x++;
}
if (ccmot)
tab[j][x] = '\0';
j++;
}
return (tab);
}*/

int	ft_nstr(char *str)
{
	int	nb;
	int	res;
	int	i;

	res = 0;
	i = 0;
	nb = 1;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		{
			i++;
			nb++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			i++;
			if (nb)
			{
				res++;
				nb = 0;
			}
		}
	}
	return (res);
}

char	**ft_loop(char **tab, char *str, int i, int j)
{
	int ccmot;
	int x;

	while (str[i])
	{
		ccmot = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			ccmot++;
			i++;
		}
		if (ccmot && !(tab[j] = (char*)malloc(sizeof(char) * (ccmot))))
			return (NULL);
		x = -1;
		while (ccmot > ++x)
			tab[j][x] = str[i - ccmot + x];
		if (ccmot && j++ > 0)
			tab[j - 1][x] = '\0';
		tab[j] = 0;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_nstr(str) + 1))))
		return (NULL);
	if (!(tab = ft_loop(tab, str, i, j)))
		return (NULL);
	return (tab);
}

int main()
{
	//char *lol = strdup(argv[1]);
	//printf("%s\n", lol);
	//char tabl[] = {'l', 'o', 'l', '\0'};
	char tab[6];
	tab[0] = '\0';
	tab[1] = ' ';
	tab[2] = 'p';
	tab[3] = ' ';
	tab[4] = 'W';
	tab[5] = '\0';
	//char **array = ft_ntr(tabl);
	char **array;
	array = ft_split_whitespaces(tab);
	print(array);
	return 0;
}
