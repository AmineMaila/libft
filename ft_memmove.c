/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:57:47 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/02 12:26:10 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
	{
		len -= 1;
		while (len >= 0)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			len--;
		}
		return (dst);
	}
	dst = ft_memcpy(dst, src, len);
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main()
{
	const char src[] = "Hello";
	char *dest = (char *)(src + 3);
	printf("%s\n", ft_memmove(dest, src, 5));
	printf("%s\n", memmove(dest, src, 5));
}
