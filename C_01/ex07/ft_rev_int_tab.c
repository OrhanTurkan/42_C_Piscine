/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:51:33 by oturkan           #+#    #+#             */
/*   Updated: 2021/10/30 19:53:13 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;
	int	temp[size];

	c = 0;
	index = size - 1;
	while (index >= 0)
	{
		temp[c] = tab[index];
		index--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = temp[c];
		c++;
	}
}
