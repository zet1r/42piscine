#include "rush02.h"

char	*subzero(char *str, t_dict *dict)
{
	int		i;
	char	*sub;
	int		len;

	len = ft_strlen(str);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		error2(dict);
	i = 1;
	if (len % 3 == 0)
	{
		sub[0] = '1';
		while (i < len)
		{
			sub[i++] = '0';
		}
	}
	else if (len % 3 == 2)
	{
		sub[0] = str[0];
		while (i < len)
			sub[i++] = '0';
	}
	sub[i] = '\0';
	return (sub);
}

char	*scorpion(char *str, t_dict *dict)
{
	int		i;
	char	*sub;
	int		len;

	len = ft_strlen(str);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		error2(dict);
	i = 1;
	if (len % 3 == 1)
	{
		sub[0] = '1';
		while (i < len)
		{
			sub[i] = '0';
			i++;
		}	
	}
	sub[i] = '\0';
	return (sub);
}

char	*crop(char *str, t_dict *dict)
{
	int		i;
	char	*new;
	int		len;

	len = ft_strlen(str);
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		error2(dict);
	i = 0;
	while (i < len - 1)
	{
		new[i] = str[i + 1];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*cut(char *str, int n, t_dict *dict)
{
	int		i;
	char	*new;

	new = (char *)malloc(sizeof(char) * n + 1);
	if (!new)
		error2(dict);
	i = 0;
	while (i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
