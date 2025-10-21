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

int	ft_countdelimiters(char c, const char *str)
{
	size_t	total;
	int	flag;

	flag = 0;
	total = 1;
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
	if (ft_countdelimiters(c, str) == 0)
		return (NULL);
	while (*str != c)
		str++;
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

	len = 0;
	while (*str == c)
		str++;	
	while (*str != c)
	{
		str++;
		len++;
	}
	prefix = malloc(len + 1);
	if (prefix == NULL)
		return (NULL);
	prefix = ft_substr(str, 0, len);
	return (prefix);
}

char	**ft_split(char const *s, char c)
{
	char	**pointers;
	size_t	numstrs;
	size_t	i;

	numstrs = ft_countdelimiters(c, s) + 1;
	pointers = malloc(numstrs * sizeof(char *));
	ft_memset(pointers, 0, numstrs);
	i = 0;
	while (i < numstrs)
	{
		if (s == NULL)
		{
			pointers[i] = malloc(1);
			pointers[i] = 0;
		}
		else
		{
			pointers[i] = prefix(s, c);
			s = sufix(s, c);
		}
		i++;
	}
	pointers[i] = NULL;
	return (pointers);
}
