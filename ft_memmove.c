/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:57:47 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/24 17:19:26 by mmaila           ###   ########.fr       */
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
