/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 03:20:36 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/10/19 01:02:19 by jroux-fo         ###   ########.fr       */
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

char *ft_strnstr(const char	*big, const char *little, int len)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    if (!little)
        return ((char *) big);
    while (big[i])
    {
        if (big[i] == little[j])
        {
            while (big[i] == little[j])
            {
                count++;
                j++;
            }
            if (count == len || count == ft_strlen(little))
                return ((char *) little + i);
            else
                count = 0;
            j++;
        }
        else
            j++;
        i++;
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    printf("%s\n", strnstr("Salut conar", "Salut", 3));
}