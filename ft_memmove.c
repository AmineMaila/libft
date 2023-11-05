/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:57:47 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 14:47:05 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	holder;

	holder = (int)len - 1;
	if (dst > src)
	{
		while (holder >= 0)
		{
			*(unsigned char *)(dst + holder) = *(unsigned char *)(src + holder);
			holder--;
		}
		return (dst);
	}
	dst = ft_memcpy(dst, src, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char src[8] = "Hello";
	const char src1[8] = "Hello";
	char *dest = (char *)(src + 3);
	char *dst = (char *) (src + 3);
	printf("%s\n", ft_memmove(dest, src, 4));
	printf("%s\n", memmove(dst, src1, 4));
}*/
