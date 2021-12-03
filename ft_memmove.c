/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:56:19 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/30 17:07:34 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (len == 0)
		return (dst);
	if (dst <= src)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	dest = (unsigned char *)dst + len - 1;
	source = (unsigned char *)src + len - 1;
	while (len)
	{
		dest[i] = source[i];
		i--;
		len--;
	}
	return (dst);
}
