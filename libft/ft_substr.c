/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:00:34 by jromann           #+#    #+#             */
/*   Updated: 2025/05/09 14:27:47 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;
	char	*ptr;

	i = 0;
	length = ft_strlen(s);
	if (start >= length || len == 0)
		return (ft_calloc(1, 1));
	if (len > length - start)
		len = length - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (ft_strlen((char *)s) <= start)
	{
		ptr[0] = 0;
		return (ptr);
	}
	while (i < len)
	{
		ptr[i] = s[start++];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
