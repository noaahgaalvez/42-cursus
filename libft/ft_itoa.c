/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:14:53 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/06 10:57:25 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_intchar(char *s, size_t number, int len)
{
	while (number > 0)
	{
		s[len] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	size_t	number;

	len = ft_intlen(n);
	number = n;
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	len--;
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		number = number * -1;
	}
	s = ft_intchar(s, number, len);
	return (s);
}
