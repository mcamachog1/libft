#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(len + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcat(join, s1, len + 1);
	ft_strlcat(join, s2, len + 1);
	return (join); 
}
