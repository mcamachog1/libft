/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:50:00 by macamach          #+#    #+#             */
/*   Updated: 2025/10/23 13:55:15 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ischarinstr(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		else
			str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_set;
	size_t	len_s1;
	char	*begin;
	char	*end;
	char	*strtrim;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	begin = malloc(len_set + 1);
	end = malloc(len_set + 1);
	if (!begin || !end)
		return (NULL); 
	begin = ft_substr(s1, 0, len_set);
	end = ft_substr(s1, len_s1 - len_set, len_set);
	printf("Str:%s\n", s1);
	printf("begin:%s\n", begin);
	printf("end:%s\n", end);
	strtrim = (char *)s1;
	if (!ft_strncmp(set, begin, len_set))
	{
		printf("\nquitar cabeza\n%s", begin);
		strtrim = ft_substr(s1, len_set, len_s1 - len_set); 
		printf("strtrim cabeza:%s\n", strtrim);
	}
	if (!ft_strncmp(set, end, len_set))
	{
		printf("\nquitar cola\n%s", end);
		strtrim = ft_substr(strtrim, 0, len_s1 - 2*len_set); 
		printf("strtrim cola:%s\n", strtrim);
	}
	return (strtrim);
}
