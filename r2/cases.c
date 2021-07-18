#include "rush02.h"

void	case1(char *str, t_dict *dict)
{
	if (str[0] != '0')
		search(str, dict);
	free(str);
}

void	case2(char *str, t_dict *dict)
{
	if (str[0] == '0')
		case1(crop(str, dict), dict);
	else
	{
		if (str[0] == '1')
			search(str, dict);
		else if (str[1] == '0')
			search(str, dict);
		else
		{
			search(subzero(str, dict), dict);
			case1(crop(str, dict), dict);
		}
	}
	free(str);
}

void	case3(char *str, t_dict *dict)
{
	char	a[1];

	if (str[0] == '0')
	{
		case2(crop(str, dict), dict);
	}
	else
	{
		a[0] = str[0];
		search(&a[0], dict);
		search(subzero(str, dict), dict);
		case2(crop(str, dict), dict);
	}
	free(str);
}

char	*case4aux(char *str, int *len, t_dict *dict)
{
	case3(cut(str, 3, dict), dict);
	str = crop(str, dict);
	str = crop(str, dict);
	if (*len > 3)
		search(scorpion(str, dict), dict);
	str = crop(str, dict);
	return (str);
}

void	case4(char	*str, t_dict *dict)
{
	int	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (len % 3 == 0)
		{		
			str = case4aux(str, &len, dict);
			len -= 3;
		}
		else if (len % 3 == 2)
		{
			str = case4aux2(str, dict);
			len -= 2;
		}
		else if (len % 3 == 1)
		{
			case1(cut(str, 1, dict), dict);
			search(scorpion(str, dict), dict);
			str = crop(str, dict);
			len--;
		}
	}
	free(str);
}
