/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:12:15 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/12/02 14:17:08 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1)
		return (1);
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

static	const char	*ft_check(const char *str, const char *needle, size_t len)
{
	if (ft_strcmp(needle, str) == 0)
		return (str);
	if (ft_strcmp(needle, "") == 0)
		return (str);
	if (len == 0)
		return (NULL);
	return ("salut");
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		stop;

	i = 0;
	j = 0;
	if (ft_strcmp(ft_check(haystack, needle, len), "salut") != 0)
		return ((char *)ft_check(haystack, needle, len));
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			stop = i;
			while (haystack[i] == needle[j] && i++ < len)
				j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + stop);
			j = 0;
			i = stop;
		}
		i++;
	}
	return (0);
}
