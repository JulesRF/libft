/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:12:15 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/24 14:04:03 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		stop;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			stop = i;
			while (haystack[i] == needle[j] && i < len)
			{
				j++;
				i++;
			}
			if (j == ft_strlen(needle))
				return ((char *)haystack + stop);
			j = 0;
			i = stop;
		}
		i++;
	}
	return (0);
}
