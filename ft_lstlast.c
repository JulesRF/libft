/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:37:25 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/29 13:56:52 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*

#include <stdio.h>

int	main()
{
	t_list *cell1 = malloc(sizeof(t_list));
	t_list *res = malloc(sizeof(t_list));
	
	char chaine1[] = "Salut";
	
	
	cell1->content = chaine1;
	cell1->next = NULL;
	res = ft_lstlast(NULL);
	printf("%s\n", res->content);
}

*/