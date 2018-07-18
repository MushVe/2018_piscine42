// 42 marvin.fr //


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	print(char **str)
{
	int i;
	i = -1;
	if (!str)
		return ;
	while (str[++i])
		printf("%s\n", str[i]);
}

int ft_ntrstr(char *str)
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
	//printf("%d", ft_ntrstr(str) + 1);
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
}

int main(int argc, char **argv)
{
	//char *lol = strdup(argv[1]);
	//printf("%s\n", lol);
	//char tabl[] = {'l', 'o', 'l', '\0'};
	char tab[6];
	tab[0] = ' ';
	tab[1] = 'l';
	tab[2] = 'o';
	tab[3] = 'l';
	tab[4] = ' ';
	tab[5] = '\0';
	//char **array = ft_ntr(tabl);
	char **array = ft_ntr(tab);
	print(array);
	return 0;
}
