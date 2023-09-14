/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:09:50 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/09/14 12:11:14 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = dst_len;
	while (src[i - dst_len] && i < dstsize - 1 && dstsize > 0)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	src_len = ft_strlen(src);
	return (dst_len + src_len);
}
