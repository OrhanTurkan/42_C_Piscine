/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:02:37 by oturkan           #+#    #+#             */
/*   Updated: 2021/11/13 19:02:39 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_uzunluk(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*hed;
	int		a;

	a = 0;
	while (src[a])
		a++;
	hed = (char *)malloc(sizeof(src) * (a + 1));
	a = 0;
	if (hed == NULL)
		return (NULL);
	else
	{
		while (src[a])
		{
			hed[a] = src[a];
			a++;
		}
		hed[a] = '\0';
		return (hed);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			b;

	a = malloc(sizeof(t_stock_str) * (ac + 1));
	if (a == NULL)
		return (NULL);
	b = 0;
	while (b < ac)
	{
		a[b].str = av[b];
		a[b].copy = ft_strdup(av[b]);
		a[b].size = ft_uzunluk(av[b]);
		b++;
	}
	a[b].str = 0;
	return (a);
}
