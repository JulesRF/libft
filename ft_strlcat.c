/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:07:14 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/10/19 01:01:15 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t strlcat(char *dst, const char *src, size_t size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    destlen;

    i = 0;
    j = 0;
    destlen = ft_strlen(dest);
    while (i < size && dest[i])
        i++;
    if (i == size)
        return (i + ft_strlen(src));
    while (src[j])
    {
        if (j < size - destlen - 1)
        {
            dest[i] = src[j];
            i++;
        }
        j++;
    }
    dest[i] = '\0';
    return (destlen + j);
}