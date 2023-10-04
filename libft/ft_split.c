/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:46:06 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/04 10:12:31 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substrings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	if (s[0] == c)
		count--;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

void	allocate_substring(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
		{
			array[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	array[j] = NULL;
}

// void	free_mem(char **array)
// {
// 	size_t	i;

// 	i = 0;
// 	if (array == NULL)
// 		return ;
// 	while (array[i] != NULL)
// 	{
// 		free(array[i]);
// 		i++;
// 	}
// 	free(array);
// }

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	substr;

	substr = count_substrings(s, c);
	array = (char **)malloc((substr + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	allocate_substring(array, s, c);
	return (array);
}
	// if (allocate_substring(array, s, c) == -1)
	// {
	// 	free_mem(array);
	// 	return (NULL);
	// }
