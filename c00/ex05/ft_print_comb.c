#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 47;
	while (++a <= 57)
	{
		b = a;
		while (++b <= 57)
		{
			c = b;
			while (++c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55)
					write(1, ", ", 2);
			}
		}
	}
}
