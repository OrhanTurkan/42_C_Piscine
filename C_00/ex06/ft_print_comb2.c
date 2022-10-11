/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:29:04 by oturkan           #+#    #+#             */
/*   Updated: 2021/10/30 15:33:07 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	xwrite(int x, int y)
{
	ft_putchar(48 + x / 10);
	ft_putchar(48 + x % 10);
	ft_putchar(' ');
	ft_putchar(48 + y / 10);
	ft_putchar(48 + y % 10);
	if (x != 99 && y != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (a != b)
			{
				xwrite(a, b);
			}
			b++;
		}
		a++;
	}
}
