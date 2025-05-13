/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:13:37 by jromann           #+#    #+#             */
/*   Updated: 2025/04/28 15:42:59 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	if (dest == NULL && size == 0)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	if (dest_len >= size)
		return (size + src_len);
	while (i < size - dest_len - 1 && src[i] != 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len + dest_len);
}
