/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:52:22 by macamach          #+#    #+#             */
/*   Updated: 2025/10/21 12:34:13 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*char_to_string(char c)
{
    char *s;

    s = malloc(sizeof(char) * 2);
    if (s == NULL) 
        return (NULL);
    s[0] = c;
    s[1] = '\0';
    return (s);
}

int	ft_countwords(char c, const char *str)
{
	size_t	total;
	int	flag;

	flag = 0;
	total = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		if (*str == c && flag == 0)
		{
			total++;
			flag = 1;
		}
		else if (*str != c)
			flag = 0;
		str++;
	}
	return (total);
}
char const	*sufix(char const *str, char c)
{
	if (ft_countwords(c, str) == 0)
		return (NULL);
	while (*str == c)
		str++;
	while (*str != c)
		str++;
	if (*str)
		return (str);
	else
		return (NULL);
}

char	*prefix(char const *str, char c)
{
	size_t	len;
	char	*prefix;
	char	*word;
	char	*set;

	len = 0;
	while (str[len] == c)
		len++;
	while (str[len] != c && str[len])
		len++;
	prefix = malloc(len + 1);
	if (prefix == NULL)
		return (NULL);
	prefix = ft_substr(str, 0, len);
	set = char_to_string(c);
	word = ft_strtrim(prefix, set);
	free(prefix);
	free(set);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**pointers;
	size_t	numstrs;
	size_t	i;

	numstrs = ft_countwords(c, s);
	pointers = malloc(numstrs * sizeof(char *));
	ft_memset(pointers, 0, numstrs);
	i = 0;
	while (i < numstrs)
	{
	//	if (s == NULL)
	//	{
	//		pointers[i] = malloc(1);
	//		pointers[i] = 0;
	//	}
	//	else
	//	{
			pointers[i] = prefix(s, c);
			s = sufix(s, c);
	//	}
		i++;
	}
	pointers[i] = NULL;
	return (pointers);
}
