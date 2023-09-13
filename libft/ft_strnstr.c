#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen((char *)needle);
	if (k == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (j == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}