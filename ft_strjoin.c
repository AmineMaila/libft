/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:38 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/05 15:19:30 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	jsize;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	jsize = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *) malloc(jsize * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, s1, ft_strlen(s1) + 1);
	ft_strlcpy(joined + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (joined);
}
/*
#include <stdio.h>

int main()
{
	char arr[] = "Hello";
	char arr2[] = " World";

	printf("%s\n", ft_strjoin(arr, arr2));
}*/