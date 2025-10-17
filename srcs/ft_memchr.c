#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t	i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n && *pointer)
	{
		if (*pointer == c)
			return ((void *)pointer);
		i++;
		pointer++;
	}
	return (NULL);
}
