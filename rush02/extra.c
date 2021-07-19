#include "rush02.h"

void	free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		free(dict[i].num);
		free(dict[i].txt);
		i++;
	}
	free(dict);
}

void	error(t_dict *dict)
{
	free_dict(dict);
	write(1, "Dict Error\n", 12);
	exit (1);
}

void	error2(t_dict *dict)
{
	free_dict(dict);
	write(1, "Error\n", 6);
	exit (2);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return ;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

char	*case4aux2(char *str, t_dict *dict)
{
	case2(cut(str, 2, dict), dict);
	str = crop(str, dict);
	search(scorpion(str, dict), dict);
	str = crop(str, dict);
	return (str);
}
