/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:40:24 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/24 17:15:27 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	if (dstsize == 0 && dst == NULL)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[i] && i < dstsize - dstlen - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dstlen + ft_strlen(src));
}
