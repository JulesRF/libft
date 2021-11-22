/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:35:38 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/10/19 01:02:53 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_whitespaces(const char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
        i++;
    return (i);
}

int ft_atoi(const char *nptr)
{
    int res;
    int i;
    int moins;

    res = 0;
    i = ft_whitespaces(nptr);
    moins = 0;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            moins = 1;
        i++;
    }
    while (nptr[i] <= '9' && nptr[i] >= '0')
    {
        res = res * 10 + nptr[i] - 48;
        i++;
    }
    if (moins == 1)
        return (-res);
    return (res);
}