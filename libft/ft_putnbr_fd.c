/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:42:59 by jromann           #+#    #+#             */
/*   Updated: 2025/05/05 14:08:10 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			str[11];
	int				i;
	long long int	buff;

	buff = n;
	i = -1;
	if (n < 0)
	{
		buff *= -1;
	}
	while (buff >= 10)
	{
		str[++i] = buff % 10 + '0';
		buff /= 10;
	}
	str[++i] = buff + '0';
	if (n < 0)
		str[++i] = '-';
	while (i >= 0)
		write(fd, &str[i--], 1);
}
