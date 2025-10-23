/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:40:36 by macamach          #+#    #+#             */
/*   Updated: 2025/10/23 11:16:08 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power(int number, unsigned int exp)
{
	unsigned int	i;
	int		power;

	i = 0;
	power = 1;
	if (!number && !exp)
		return (-1);
	while (i < exp)
	{
		power *= number;
		i++;
	}
	return (power);
}

unsigned int	number_len(int n)
{
	unsigned int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned int	i;
	int		j;
	char		*str;
	int		digit;

	len = number_len(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	//ft_memset(str, 48, len - 1);
	i = 0;
	j = len;
	while (i < len)
	{
		digit = n / power(10, j - 1);
		str[i] = digit + 48;
		n = n - (digit * power(10, j - 1));
		j--;
		i++;
	}
	str[i] = '\0';
	return (str);
}
