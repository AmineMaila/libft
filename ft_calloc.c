/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:42:34 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/02 12:55:43 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	alloc = malloc(count * size);
	if (alloc == NULL)
		return (NULL);
	ft_memset(alloc, '\0', count * size);
	return (alloc);
}
/*
#include <stdio.h>

int main()
{
	char *cpy;

	cpy = (char *) calloc(6, sizeof(char));

	printf("%s\n", cpy);
	free(cpy);
}*/
