#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	dig;
	int	x[4];

	dig = -1;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		while ((nb > 0) && ((nb % 10) != 0))
		{
			x[++dig] = nb % 10;
			nb = nb / 10;
		}
		while (--dig >= 0)
		{
			ft_putchar(x[dig] + '0');
		}
	}
}
