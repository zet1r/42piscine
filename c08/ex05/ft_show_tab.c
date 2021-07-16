#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	dig;
	int	x[9];

	dig = -1;
	if ((nb < 0) && (nb > -2147483648))
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if ((nb < 10) && (nb > -2147483648))
		ft_putchar(nb + '0');
	else if ((nb >= 10) && (nb <= 2147483647))
	{
		while (nb > 0)
		{
			x[++dig] = nb % 10;
			nb = nb / 10;
		}
		while (dig >= 0)
		{
			ft_putchar(x[dig--] + '0');
		}
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
