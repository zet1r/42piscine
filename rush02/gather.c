#include "rush02.h"

void	ft_memset(char *str, char c, int size)
{
	int	i;

	i = 0;
	while (i != size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
}

int	skip(int fd, char *c, char x)
{
	if (*c != x)
		return (1);
	while (read(fd, c, 1) > 0)
		if (*c != x)
			return (1);
	return (0);
}

void	getnum(int fd, char *c, t_dict *dict, int i)
{
	int	len;

	len = 1;
	dict[i].num = (char *)malloc(sizeof(char) * 128);
	ft_memset(dict[i].num, '\0', 128);
	if (*c < '0' || *c > '9')
		error(dict);
	dict[i].num[0] = *c;
	while (read(fd, c, 1) > 0)
	{
		if (*c < '0' || *c > '9')
			return ;
		dict[i].num[len] = *c;
		len++;
	}
}

void	gettxt(int fd, char *c, t_dict *dict, int i)
{
	int	len;

	len = 1;
	dict[i].txt = (char *)malloc(sizeof(char) * 128);
	ft_memset(dict[i].txt, '\0', 128);
	if (*c < 32 || *c > 126)
		error(dict);
	dict[i].txt[0] = *c;
	while (read(fd, c, 1) > 0)
	{
		if (*c < 32 || *c > 126)
			return ;
		dict[i].txt[len] = *c;
		if (*c == ' ')
		{
			dict[i].txt[len] = ' ';
			skip(fd, c, ' ');
			dict[i].txt[++len] = *c;
		}
		len++;
	}
}

t_dict	*read_dict(int fd, t_dict *dict)
{
	char	c;
	int		i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		skip(fd, &c, '\n');
		getnum(fd, &c, dict, i);
		skip(fd, &c, ' ');
		if (c == ':')
			read(fd, &c, 1);
		else
			error(dict);
		skip(fd, &c, ' ');
		gettxt(fd, &c, dict, i);
		i++;
	}
	if (i < 41)
		error(dict);
	return (dict);
}
