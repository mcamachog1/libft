#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)&s[len - 1]);
		else
			len--;
	}
	return (NULL);
}
