unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[] = "Olasdasdasa1";
	char	b[] = "Al23oasdasd3";

	printf("%s\n", a);
	printf("%s\n", b);
	printf("%d\n", ft_strlcpy(b, a, 3));
	printf("%lu\n", strlcpy(b, a,3));
	return (0);
}*/
