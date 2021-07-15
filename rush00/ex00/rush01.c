/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:40:01 by jdias-mo          #+#    #+#             */
/*   Updated: 2021/07/04 18:41:46 by jdias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	while (++l <= y && (x >= 1 && y >= 1))
	{
		c = 0;
		while (++c <= x)
		{
			if ((l == 1 || l == y) && (c == 1 || c == x))
			{
				if (l == 1 && c == 1)
					ft_putchar('/');
				else if ((l == 1 && c == x) || (l == y && c == 1))
					ft_putchar('\\');
				else if (l == y && c == x)
					ft_putchar('/');
			}
			else if (c == 1 || c == x || l == 1 || l == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
