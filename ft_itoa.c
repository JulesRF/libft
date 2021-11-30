/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:33:47 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/30 10:13:31 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static char	*ft_rev(char *str, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = size;
	temp = malloc(sizeof(char) * size + 1);
	if (!temp)
		return (NULL);
	while (i < size)
	{
		temp[i] = str[j - 1];
		i++;
		j--;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		size;
	int		i;
	int		moins;

	i = 0;
	moins = 0;
	if (n < 0)
	{
		moins = 1;
		n = n * -1;
	}
	size = ft_count(n) + moins;
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	while (i < size - moins)
	{
		dest[i++] = n % 10 * moins + 48;
		n = n / 10;
	}
	if (moins == 1)
		dest[i++] = 45;
	dest[i] = '\0';
	return (ft_rev(dest, size));
}