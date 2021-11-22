/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 01:28:45 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/10/19 01:40:47 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *dest;
    int i;

    i = 0;
    dest = malloc(sizeof(size) * nmemb + 1);
    while (i <= nmemb)
        dest[i] = 0;
    dest[i] = '\0';
    return (dest);
}