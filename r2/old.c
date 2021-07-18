#include "rush02.h"

/*
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

void	print(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < 128 && dict[i].num && dict[i].txt)
	{
		putstr(dict[i].num);
		write(1, "-", 2);
		putstr(dict[i].txt);
		write(1, "\n", 1);
		i++;
	}
}

// Gather dict

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
	return (dict);
}

// Solve number

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (1)
	{
		if (x[i] == '\0' && y[i] == '\0')
			break ;
		if (x[i] > y[i])
			return (1);
		if (x[i] < y[i])
			return (-1);
		i++;
	}
	return (0);
}

char	*search(char *str, t_dict *dict)
{
	int	i;

	i = 0;
	while (i < 128 && dict[i].num && dict[i].txt)
	{
		if (ft_strcmp(str, dict[i].num) == 0)
		{
			putstr(dict[i].txt);
			write(1, " ", 1);
			return (dict[i].txt);
		}
		i++;
	}
	return (0);
}

char	*subzero(char *str, t_dict *dict)
{
	int		i;
	char	*sub;
	int		len;

	len = ft_strlen(str);
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		error2(dict);
	i = 1;

	if (len % 3 == 0)
	{
		sub[0] = '1';
		while (i < len)
		{
			sub[i] = '0';
			i++;
		}
	}
	else if (len % 3 == 2)
	{
		sub[0] = str[0];
		while (i < len)
		{
			sub[i] = '0';
			i++;
		}	
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
	sub = malloc(sizeof(char) * len + 1);
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
	new = malloc(sizeof(char) * len + 1);
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
	int i;
	char *new;

	new = malloc(sizeof(char) * n + 1);
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

void	case1(char *str, t_dict *dict)
{
	if (str[0] != '0')
		search(str, dict);
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
}

void	case3(char *str, t_dict *dict)
{
	if (str[0] == '0')
		case2(crop(str, dict), dict);
	else
	{
	char	a[1];
	a[0] = str[0];
	search(&a[0], dict);
	search(subzero(str, dict), dict);
	case2(crop(str, dict), dict);
	}
}

void	case4(char	*str, t_dict *dict)
{
	int	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (len % 3 == 0)
		{	
			case3(cut(str, 3, dict), dict);
			str = crop(str, dict);
			str = crop(str, dict);
			if(len > 3)
				search(scorpion(str,dict), dict);
			str = crop(str, dict);
			len-=3;
		}
		else if (len % 3 == 2)
		{
			case2(cut(str, 2, dict), dict);
			str = crop(str, dict);
			search(scorpion(str,dict), dict);
			str = crop(str, dict);
			len-=2;
		}
		else if (len % 3 == 1)
		{
			case1(cut(str, 1, dict), dict);
			search(scorpion(str,dict), dict);
			str = crop(str, dict);
			len--;
		}
		else
			error(dict);
	}
}

void	solve(char *str, t_dict *dict)
{
	if (ft_strlen(str) == 1)
		case1(str, dict);
	else if (ft_strlen(str) == 2)
		case2(str, dict);
	else if (ft_strlen(str) == 3)
		case3(str, dict);
	else if (ft_strlen(str) > 3)
		case4(str, dict);
	else
		error(dict);
}

char	*check_num(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] == '0' && str[i + 1] != '\0')
		i++;
	while (str[j + i] != '\0')
	{
		if (str[j + i] < '0' || str[j + i] > '9')
			return (NULL);
		j++;
	}
	return (&str[i]);
}

char	*args(int *fd, t_dict *dict, int argc, char**argv)
{
	char	*num;

	num = NULL;
	if (argc == 2)
	{
		if (!argv[1][0])
			error2(dict);
		num = argv[1];
		*fd = open("standart.dict", O_RDONLY);
	}
	else if (argc == 3)
	{
		if (!argv[2][0])
			error2(dict);
		num = argv[2];
		*fd = open(argv[1], O_RDONLY);
		if (*fd == (-1))
			error(dict);
	}
	else
		error2(dict);
	num = check_num(num);
	if (!num)
		error2(dict);
	return (num);
}


int	main(int argc, char **argv)
{
	int		fd;
	t_dict	*dict;
	char	*num;

	fd = 0;
	dict = (t_dict *)malloc(sizeof(t_dict) * 128);
	num = args(&fd, dict, argc, argv);
	dict = read_dict(fd, dict);
	if (num[0] == '0')
		write(1, "zero", 6);
	else
	solve(num, dict);
	free_dict(dict);
	close(fd);
	write(1, "\n", 1);
	return (0);
}
*/