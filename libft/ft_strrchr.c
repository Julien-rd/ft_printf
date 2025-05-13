/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:21:52 by jromann           #+#    #+#             */
/*   Updated: 2025/04/24 13:01:19 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int				i;
	int				k;
	unsigned char	c;

	i = -1;
	k = -1;
	c = (unsigned char)chr;
	while (str[++i])
	{
		if ((unsigned char)str[i] == c)
			k = i;
	}
	if ((unsigned char)str[i] == c)
		return ((char *)&str[i]);
	if (k >= 0)
		return ((char *)&str[k]);
	return (0);
}
