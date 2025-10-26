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
	char	*strtrim1;
	char	*strtrim2;
	size_t	i;
	
	if (!s1 || !set)
		return (NULL);
	strtrim1 = ft_strdup(s1);
	i = 0;
	while (s1[i])
	{
		if (!ft_ischarinstr(s1[i], set))
		{
			free(strtrim1);
			strtrim1 = ft_strdup(&s1[i]);
			break;
		}
		i++;
	}
	i = ft_strlen(strtrim1);
	while (i > 0)
	{
		if(!ft_ischarinstr(strtrim1[i - 1], set))
		{
			strtrim2 = ft_substr(strtrim1, 0, i);
			free(strtrim1);
			return (strtrim2);
		}
		else
			i--;
	}
	return (strtrim1);
}
