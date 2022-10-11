/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:16:10 by oturkan           #+#    #+#             */
/*   Updated: 2021/11/12 18:31:02 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_yaz(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_karsilastir(char *bir, char *iki)
{
	int	i;

	i = 0;
	while ((bir[i] == iki[i]) && (bir[i]) && (iki[i]))
		i++;
	return (bir[i] - iki[i]);
}

int	main(int ac, char **arg)
{
	int		i;
	int		j;
	char	*temp;

	i = ac;
	j = 1;
	while (++j <= ac)
	{
		i = 1;
		while (++i <= ac - 1)
		{
			if (ft_karsilastir(arg[i], arg[i - 1]) < 0)
			{
				temp = arg[i];
				arg[i] = arg[i - 1];
				arg[i - 1] = temp;
			}
		}
	}
	j = 0;
	while (++j < ac)
		ft_yaz(arg[j]);
}
