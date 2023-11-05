/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:20:22 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 14:24:43 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		k = 0;
		if (needle[k] == haystack[i])
		{
			j = i;
			while (needle[k] == haystack[j] && j < len && haystack[j])
			{
				k++;
				j++;
			}
			if (k == ft_strlen(needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main()
{

	//const char haystack[] = "Hello World";
	const char needle[] = "x";
	printf("%s\n", ft_strnstr(NULL, needle, 0));
	printf("%s\n", strnstr(NULL, needle, 0));
}*/
