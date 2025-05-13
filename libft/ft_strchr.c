/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:22:57 by jromann           #+#    #+#             */
/*   Updated: 2025/04/24 13:00:49 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int				i;
	unsigned char	c;

	i = 0;
	c = (unsigned char)ch;
	while (str[i])
	{
		if ((unsigned char)str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)str[i] == c)
		return ((char *)&str[i]);
	return (0);
}
