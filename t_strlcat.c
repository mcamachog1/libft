#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(void)
{
	char	message[100];
	char	dst[20] = "Tiene espacio ";
	char	src[10] = "123456789";
	
	//dst = malloc(2 * sizeof(char));
	//if (dst == NULL)
	//	return (1);
	
	printf("bufferSIZE=%zu\n", sizeof(dst));
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);
	ft_strlcat(dst, src, 20);	
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);
	//free(dst);
	return (0);
}
