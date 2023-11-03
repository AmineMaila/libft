/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:17:46 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/03 01:22:28 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	pivot;
	size_t	start;
	char	**str;
	size_t	j;

	pivot = 0;
	start = 0;
	str = (char **) malloc((word_count(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s[pivot])
	{
		while (s[pivot] == c && s[pivot])
			pivot++;
		start = pivot;
		while (s[pivot] != c && s[pivot])
			pivot++;
		if (s[start] != '\0')
			str[j++] = ft_substr(s, start, pivot - start);
	}
	str[j] = 0;
	return (str);
}
#include <stdio.h>
int main()
{
	char **arr = ft_split(NULL, ' ');

	for (int i = 0; i < 1; i++)
	{
		printf("%s\n", arr[i]);
	}
}
