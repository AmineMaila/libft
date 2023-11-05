/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:41:49 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 14:45:19 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == NULL && psrc == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(pdst + i) = *(psrc + i);
		i++;
	}
	return (dst);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char arr[15] = "Hello world";
	char dest[] = NULL;
	printf("%s\n", ft_memcpy(NULL, arr, 5));
	printf("%s\n", memcpy(NULL, arr, 5));
}*/
