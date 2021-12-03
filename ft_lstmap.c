/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:13:29 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/12/02 15:34:09 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*begin_list;

	begin_list = 0;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
		{
			ft_lstclear(&begin_list, (*del));
			return (0);
		}
		ft_lstadd_back(&begin_list, node);
		lst = lst->next;
	}
	return (begin_list);
}
