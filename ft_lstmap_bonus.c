/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:06:40 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 01:50:16 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = malloc(sizeof(t_list));
		if (temp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp->content = f(lst->content);
		temp->next = NULL;
		lst = lst->next;
		ft_lstadd_back(&new, temp);
	}
	return (new);
}
