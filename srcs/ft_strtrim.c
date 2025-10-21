/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:50:00 by macamach          #+#    #+#             */
/*   Updated: 2025/10/21 09:50:12 by macamach         ###   ########.fr       */
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
	char	*strtrim;
	size_t	i;
	size_t	j;

	strtrim = malloc(ft_strlen(s1) + 1);
	if (strtrim == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_ischarinstr(s1[i], set))
		{
			strtrim[j] = s1[i];
			i++;
			j++;
		}
		else
			i++;
	}
	strtrim[i] = '\0';
	return (strtrim);
}
