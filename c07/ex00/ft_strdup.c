#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac >= 1)
	{
		printf("%s\n", ft_strdup(av[1]));
		printf("%s\n", strdup(av[1]));
	}
	return (0);
}*/
