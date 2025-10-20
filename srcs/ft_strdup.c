#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (s == NULL)
		return (NULL);
	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
