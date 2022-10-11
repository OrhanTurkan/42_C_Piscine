/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oturkan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:47:59 by oturkan           #+#    #+#             */
/*   Updated: 2021/11/05 19:48:04 by oturkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[a] == s2[a]) && (a < n - 1) && (s1[a] && s2[a]))
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
