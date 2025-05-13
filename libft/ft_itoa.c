/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:24:54 by jromann           #+#    #+#             */
/*   Updated: 2025/05/05 14:07:46 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int				digit;
	unsigned int	buff;

	digit = 1;
	buff = n;
	if (n < 0)
	{
		buff *= -1;
		digit++;
	}
	while (buff >= 10)
	{
		buff /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int				k;
	int				digit;
	unsigned int	buff;
	char			*str;

	k = 0;
	digit = ft_digit(n);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	str[digit] = 0;
	buff = n;
	if (n < 0)
	{
		str[0] = '-';
		buff *= -1;
		k = 1;
	}
	while (--digit >= k)
	{
		str[digit] = buff % 10 + '0';
		buff /= 10;
	}
	return (str);
}
