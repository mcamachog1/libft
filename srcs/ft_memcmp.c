#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*bytes_s1;
	unsigned char	*bytes_s2;
	size_t	i;
	
	if (n == 0)
		return (0);
	bytes_s1 = (unsigned char *)s1;
	bytes_s2 = (unsigned char *)s2;

	i = 0;
	while (i < n - 1)
	{
		if (bytes_s1[i] == bytes_s2[i])
			i++;
		else
			return (bytes_s1[i] - bytes_s2[i]);
	}
	return (bytes_s1[i] - bytes_s2[i]);
}
