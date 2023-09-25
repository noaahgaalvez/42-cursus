/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:10:58 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/09/25 11:02:50 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size(size_t str_len, unsigned int start, size_t len)
{
	if (len == 0 || start >= str_len)
		return (1);
	else if (len > str_len - start)
		return (str_len - start + 1);
	else
		return (len + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(get_size(ft_strlen(s), start, len) * sizeof(char));
	if (!sub)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
