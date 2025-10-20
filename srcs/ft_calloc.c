#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb == 0 || size == 0)
	{
		pointer = malloc(1);
		return (pointer);
	}
	if (nmemb > INT_MAX / size)
		return (NULL);
	pointer = malloc(nmemb * size);
	ft_memset(pointer, 0, nmemb * size);	
	return (pointer);
}
