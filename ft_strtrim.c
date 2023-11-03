/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:47:06 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/02 22:16:26 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1[0])
	{
		trimmed = (char *) malloc(1);
		if (trimmed == NULL)
			return (NULL);
		trimmed[0] = '\0';
		return (trimmed);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
/*#include <stdio.h>
int main()
{
	char arr[] = "";
	printf("%s\n", ft_strtrim(arr, ""));
}*/
