/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:58:00 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/30 10:49:19 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_ischar(char c, char a)
{
	if (c == a)
		return (1);
	return (0);
}

static int	ft_mot(char const *s, char c)
{
	int	i;
	int	mots;

	i = 0;
	mots = 0;
	if (!c)
		return (1);
	while (ft_ischar(s[i], c) == 1)
		i++;
	while (s[i])
	{
		if (ft_ischar(s[i], c) == 0)
		{
			mots++;
			while (ft_ischar(s[i], c) == 0 && s[i])
				i++;
		}
		while (ft_ischar(s[i], c) == 1 && s[i])
			i++;
	}
	return (mots);
}

static char	*ft_strdup(char const *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (ft_ischar(str[i], c) == 0 && str[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (ft_ischar(str[i], c) == 0 && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_init(int mots)
{
	char	**init;

	init = malloc(sizeof(char *) * mots + 1);
	if (!init)
		return (NULL);
	init[0] = 0;
	return (init);
}

char	**ft_split(char const *s, char c)
{
	char	**liste;
	int		i;
	int		j;

	i = 0;
	j = 0;
	liste = ft_init(ft_mot(s, c));
	if (!liste || !s)
		return (NULL);
	while (j < ft_mot(s, c))
	{
		if (s[i])
		{
			while (ft_ischar(s[i], c) == 1)
				i++;
			liste[j] = ft_strdup((char *)s + i, c);
			j++;
		}
		while (ft_ischar(s[i], c) == 0 && s[i])
			i++;
	}
	liste[j] = 0;
	return (liste);
}
