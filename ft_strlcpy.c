/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:11:21 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 15:59:25 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Hello";
	char dest[4];
	char dest2[4];

	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);

	printf("%zu\n", strlcpy(dest2, src, 3));
	printf("%s\n", dest2);
}*/