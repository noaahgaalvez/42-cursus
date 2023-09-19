/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:55:16 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/09/19 11:21:07 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != '\0')
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (i + (unsigned char *)s);
		i++;
	}
	return (NULL);
}
