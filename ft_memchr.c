/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:27:29 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/01 14:45:53 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char *src = "/|\x12\xff\x09\x42\2162\42|\\";
	int size = 10;
	printf("%s\n", memchr(src, '\216', size));
	printf("%s\n", ft_memchr(src, '\216', size));
}*/
