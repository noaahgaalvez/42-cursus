/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:36:22 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/26 17:29:50 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
		i += ft_putchar(str[i]);
	return (i);
}

int	ft_putnbr(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}

int	ft_puthex(uintptr_t n, int is_uppercase, int prefix)
{
	int	i;

	i = 0;
	if (prefix)
		i += ft_putstr("0x");
	if (n == 0)
	{
		i += ft_putchar('0');
		return (i);
	}
	else
	{
		if (n >= 16)
			i += ft_puthex(n / 16, is_uppercase, 0);
		if (n % 16 > 9)
		{
			if (is_uppercase)
				i += ft_putchar(n % 16 + 'A' - 10);
			else
				i += ft_putchar(n % 16 + 'a' - 10);
		}
		else
			i += ft_putchar(n % 16 + '0');
	}
	return (i);
}
