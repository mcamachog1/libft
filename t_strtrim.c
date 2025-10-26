#include "libft.h"

int	main(void)
{
	char	*string = "este*es_un string, para eliminar*algunos=Lcharses";
	char	*set = "es";
	/* Core */
	printf("CORE\n");
	//printf("str:%s\nset:%s\ntrim:%s\n", string, set, ft_strtrim(string, set));
	printf("str:%s\nset:%s\ntrim:%s\n", " Ho ", " ", ft_strtrim(" Ho ", " "));
	printf("str:%s\nset:%s\ntrim:%s\n", " Hello\nWorld ", " ", ft_strtrim(" Hello\nWorld ", " "));
	printf("str:%s\nset:%s\ntrim:%s\n", "-+abc+--", "+-", ft_strtrim("-+abc+--", "+-"));
	printf("str:%s\nset:%s\ntrim:%s\n", "+---abc+-", "+-", ft_strtrim("+---abc+-", "+-"));
	printf("str:%s\nset:%s\ntrim:%s\n", "abc---", "---", ft_strtrim("abc---", "---"));
	printf("str:%s\nset:%s\ntrim:%s\n", "x_a_xx", "xx", ft_strtrim("x_a_xx", "xx"));
	printf("str:%s\nset:%s\ntrim:%s\n", "xx_a_x", "xx", ft_strtrim("xx_a_x", "xx"));

	/* Bound I */
/*	printf("BOUND\n");
	printf("str:%s\nset:%s\ntrim:%s\n", "", "abc", ft_strtrim("", "abc"));
	printf("str:%s\nset:%s\ntrim:%s\n", "abc", "", ft_strtrim("abc", ""));
	printf("str:%s\nset:%s\ntrim:%s\n", "", "", ft_strtrim("", ""));
	printf("str:%s\nset:%s\ntrim:%s\n", "xxxxx", "x", ft_strtrim("xxxxx", "x"));
	printf("str:%s\nset:%s\ntrim:%s\n", "a", "a", ft_strtrim("a", "a"));
	printf("str:%s\nset:%s\ntrim:%s\n", "a", "x", ft_strtrim("a", "x"));
*/	
	/* Error cases */
/*	printf("ERROR\n");
	printf("str:%s\nset:%s\ntrim:%s\n", "NULL", "x", ft_strtrim(NULL, "x"));
	printf("str:%s\nset:%s\ntrim:%s\n", "abc", "NULL", ft_strtrim("abc", NULL));
	
*/	
	return (0);
}
