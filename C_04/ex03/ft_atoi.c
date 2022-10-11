/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:06:32 by oturkan           #+#    #+#             */
/*   Updated: 2021/11/12 18:50:51 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	kontrol;
	int	cevap;

	i = 0;
	kontrol = 1;
	cevap = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			kontrol *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		cevap = (str[i] - '0') + (cevap * 10);
		i++;
	}
	return (cevap * kontrol);
}
