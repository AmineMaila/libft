/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:56:01 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/01 19:57:12 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	count;

	i = 0;
	count = -1;
	while (str[i])
	{
		if (str[i] == (const char)c)
			count = i;
		i++;
	}
	if ((const char)c == 0)
		return ((char *)(str + i));
	if (count >= 0)
		return ((char *)(str + count));
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	printf("%s\n", ft_strrchr("Hello world", 'o'));
}*/
