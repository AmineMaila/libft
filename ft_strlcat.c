/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:40:24 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/02 17:23:04 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[i] && i < dstsize - dstlen - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dstlen + ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst[5] = "Hello";
	char dst2[5] = "Hello";
	const char src[] = " xdd";
	printf("ft :%zu\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("strlcat :%zu\n", strlcat(dst2, src, sizeof(dst2)));
	printf("ft:%s\n", dst);
	printf("strlcat:%s\n", dst2);
}*/
