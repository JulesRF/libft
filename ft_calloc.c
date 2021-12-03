/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 01:28:45 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/12/01 11:41:43 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = malloc(size * nmemb);
	if (!dest)
		return (NULL);
	while (i < nmemb * size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
