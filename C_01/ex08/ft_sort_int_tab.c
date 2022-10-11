/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:08:16 by oturkan           #+#    #+#             */
/*   Updated: 2021/10/31 12:05:38 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	yirmibes(int *tab, int i, int temp, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	temp = 0;
	yirmibes(tab, i, temp, size);
}

void	yirmibes(int *tab, int i, int temp, int size)
{
	int	bir;
	int	iki;

	while (i < size)
	{
		bir = 0;
		iki = 1;
		while (iki < size)
		{
			if (tab[bir] > tab[iki])
			{
				temp = tab[bir];
				tab[bir] = tab[iki];
				tab[iki] = temp;
				bir++;
				iki++;
			}
			else
			{
				bir++;
				iki++;
			}
		}
		i++;
	}
}
