#include "rush02.h"

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

void	solve(char *str, t_dict *dict)
{
	if (ft_strlen(str) >= 40)
		error(dict);
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
