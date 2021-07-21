#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_cont(char *str, char *charset)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check(str[i], charset) == 0
			&& ft_check(str[i + 1], charset) == 1)
			k++;
		i++;
	}
	return (k);
}

char	*ft_copy(char *src, int n, int n2)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (n + n2) + 1);
	i = 0;
	while (src[n] != '\0' && n < n2)
	{
		str[i] = src[n];
		i++;
		n++;
	}
	str[i] = '\0';
	return (str);
}

int	g_x;

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;
	char	*copy;

	g_x = 0;
	tab = malloc(sizeof(char **) * ft_cont(str, charset) + 1);
	i = 0;
	while (str[i])
	{
		copy = ft_copy(str, 0, ft_strlen(str));
		if (ft_check(str[i], charset) == 1)
			i++;
		else
		{
			j = i;
			while (str[i] && ft_check(str[i], charset) == 0)
				i++;
			tab[g_x] = malloc(sizeof(char) * (i - j) + 1);
			tab[g_x] = ft_copy(copy, j, i);
			g_x++;
		}
	}	
	tab[g_x] = 0;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	i;
	char str[] = "123456789";
	char charset[] = "0";

	printf("%d\n", ft_cont(str, charset));
	i = 0;
	while (ft_split(str, charset)[i] != 0)
	{	
		printf("%s\n", ft_split(str, charset)[i]);
		i++;
	}
	return (0);
}
