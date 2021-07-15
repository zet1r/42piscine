#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **str, int n)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

unsigned int	g_l;

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*a;

	if (size == 0)
		a = 0;
	a = (char *)malloc(sizeof(char) * ((ft_strlen(sep) * (size - 1))
				+ ft_strslen(strs, size) + 1));
	i = -1;
	g_l = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			a[g_l++] = strs[i][j];
		if (strs[i][j] == '\0' && i < size - 1)
		{
			k = -1;
			while (sep[++k] != '\0')
				a[g_l++] = sep[k];
		}
	}
	a[g_l] = '\0';
	return (a);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char *sep = "--SEP--";
	char	*tab;

	printf("%d\n", (ft_strlen(sep) * (ac - 1)));
	printf("%d\n", ft_strslen(av, ac));
//	printf("%lu\n", sizeof(*sep));
//	printf("%lu\n", sizeof(**av));
	tab = ft_strjoin(ac, av, sep);
		printf("%s\n", tab);
	return (0);
}*/
