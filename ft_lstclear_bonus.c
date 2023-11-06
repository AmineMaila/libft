/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:25:23 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/06 01:38:48 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (del == NULL || lst == NULL)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
int main()
{
	t_list *elem1;
	t_list *elem2;

	elem1 = ft_lstnew("Hello");
	elem1->next = elem2;
	elem2 = ft_lstnew("World");


}*/
