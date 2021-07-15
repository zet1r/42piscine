#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_print_params(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	while (i < c)
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			write(1, &v[i][j], 1);
			j++;
		}
		v[i][j] = '\0';
		write (1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*swap;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
