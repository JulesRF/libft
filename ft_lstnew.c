/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:37:01 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/29 15:49:43 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newcell;
	
	newcell = malloc(sizeof(t_list));
	if (!newcell)
		return (NULL);
	newcell->content = content;
	return (newcell);
}

/*

#include <stdio.h>

int	main()
{
	t_list *cell1 = malloc(sizeof(t_list));
	t_list *cell2 = ft_lstnew("coucou");
	t_list *cell3 = malloc(sizeof(t_list));
	char chaine1[] = "Salut";
	char chaine3[] = "conard";
	int	i;

	i = 0;
	cell1->content = chaine1;
	cell3->content = chaine3;

	cell1->next = cell2;
	cell2->next = cell3;
	cell3->next = NULL;
	printf("%s\n", cell1->content);
	printf("%s\n", cell2->content);
	printf("%s\n", cell3->content);
	while (cell1)
	{
  		cell1 = cell1->next;
  		i++;
	}
	printf("%d\n", i);
}

*/