/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:49:22 by jroux-fo          #+#    #+#             */
/*   Updated: 2021/11/29 13:57:40 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;
	
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	temp = ft_lstlast(*alst);
	temp->next = new;
}

/*

void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	if (*lst == 0)
		*lst = new_list;
	else
		(ft_lstlast(*lst))->next = new_list;
}

*/
/*

#include <stdio.h>

int main()
{
	t_list *cell1 = malloc(sizeof(t_list));
	t_list *newcell = malloc(sizeof(t_list));
	t_list *cell2 = malloc(sizeof(t_list));
//	t_list *cell3 = malloc(sizeof(t_list));
	char	chaine1[] = "LA PREMIERE";
	char	chaine2[] = "LA DEUXIEME";
//	char	chaine3[] = "LA TROISIEME";
	int		i = 0;


	newcell->content = "NOUVEAU";
	cell1->content = chaine1;
	cell2->content = chaine2;
//	cell3->content = chaine3;
	
	cell1->next = cell2;
	cell2->next = NULL;
	newcell->next = NULL;
	ft_lstadd_back(&cell1, newcell);
	while(cell1)
	{
		printf("%s\n", cell1->content);
		cell1 = cell1->next;
		i++;
	}
	printf("%d\n", i);
}

*/