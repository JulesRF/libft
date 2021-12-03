/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:34:15 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/30 17:18:53 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_suppr;

	while (*lst)
	{
		to_suppr = *lst;
		(*del)(to_suppr->content);
		*lst = to_suppr->next;
		free(to_suppr);
	}
	*lst = NULL;
}
