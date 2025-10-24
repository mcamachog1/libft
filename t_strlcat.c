#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(void)
{
	char	message[100];
	char	dst[20] = "NoTieneespacio";
	char	src[5] = "abcd";
	size_t	size;
	
	//dst = malloc(2 * sizeof(char));
	//if (dst == NULL)
	//	return (1);
	//printf("%zu\n", ft_strlcat("pqrstuvwxyz", "abcd", 2));
	printf("tamanoDestino=%zu\n", sizeof(dst));
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);
	size = ft_strlcat(dst, src, 2);	
	printf("size:%zu\n", size);
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);
	//free(dst);
	return (0);
}
