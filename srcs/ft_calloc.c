/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:57:05 by macamach          #+#    #+#             */
/*   Updated: 2025/10/21 09:57:07 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
