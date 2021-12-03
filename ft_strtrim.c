/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:44:11 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/12/03 14:56:56 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char const *set, char a)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_avant(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (ft_ischarset(set, str[i]) == 1 && str[i])
		i++;
	return (i);
}

static int	ft_apres(char const *str, char const *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (ft_ischarset(set, str[i]) == 1 && i != 0)
		i--;
	return (i);
}

int	ft_check(const char *s1, const char *set)
{
	int		i;

	if (ft_avant(s1, set) == (int)ft_strlen(s1))
		return (1);
	i = 0;
	while (s1[i])
	{
		if (s1[i] >= 32)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index_debut;
	int		index_fin;
	char	*dest;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (ft_check(s1, set) != 0)
		return (ft_strdup(""));
	index_debut = ft_avant(s1, set);
	index_fin = ft_apres(s1, set);
	dest = malloc(sizeof(char) * index_fin - index_debut + 1 + 1);
	if (!dest)
		return (NULL);
	i = 0;
	j = index_debut;
	while (i < index_fin - index_debut + 1)
		dest[i++] = s1[j++];
	dest[i] = '\0';
	return (dest);
}
