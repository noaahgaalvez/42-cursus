/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:10:18 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/09/25 10:20:59 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j1;
	size_t	j2;
	char	*join;

	i = 0;
	j1 = 0;
	j2 = 0;
	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join || !(s1 || s2))
		return (NULL);
	while (j1 < ft_strlen(s1))
	{
		join[i] = s1[j1];
		i++;
		j1++;
	}
	while (j2 < ft_strlen(s2))
	{
		join[i] = s2[j2];
		i++;
		j2++;
	}
	join[i] = '\0';
	return (join);
}
