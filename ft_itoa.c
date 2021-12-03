/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:33:47 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/12/03 15:26:42 by jroux-fo         ###   ########.fr       */
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
		count++;
	}
	return (count);
}

static char	*ft_rev(char *str, int size, int moins, int i)
{
	int		j;
	char	temp;

	if (moins == 1)
		str[i] = 45;
	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		size;
	int		i;
	int		moins;

	i = 0;
	moins = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
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
		dest[i++] = n % 10 + 48;
		n = n / 10;
	}
	return (ft_rev(dest, size, moins, i));
}
