#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{

	size_t	size;
	char	message[100];
	// dst de tamanho 0 
	char	dst[] = "";
	char	src[8] = "1234567";
	strcpy(message, "dst NULL\n");
	// Truncar
	/*char	dst[6] = "ABCDE";
	char	src[8] = "1234567";
	strcpy(message, "Trunca\n");*/
	// Copia y sobra
	/*char	dst[10] = "ABCDEFGHI";
	char	src[8] = "1234567";
	strcpy(message, "Copia y sobra\n");*/
	// Mismo tamanho
	/*char	dst[8] = "ABCDEFG";
	char	src[8] = "1234567";
	strcpy(message, "Mismo tamanho\n");*/


	size = strlen(dst) + 1;
	printf("%s\n", message);
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);
	ft_strlcpy(dst, src, size);	
	printf("dst=%s\n", dst);
	printf("src=%s\n", src);

	return (0);
}
