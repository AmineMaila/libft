/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:27:06 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/02 12:40:08 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	size;

	size = ft_strlen(s1) + 1;
	cpy = (char *) malloc(size * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, size);
	return (cpy);
}
/*
#include <stdio.h>
int main()
{
	char arr[] = "hello world";

	printf("%s\n", ft_strdup(arr));
}*/
