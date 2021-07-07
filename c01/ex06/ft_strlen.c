int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	char	*string;

	string = "good job";
	n = ft_strlen(string);
	printf("%d \n", n);
	return(0);
}
*/
