/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:25:04 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/01 19:49:01 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (const char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((const char)c == 0)
		return ((char *)str + i);
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	printf("%s\n",ft_strchr("teste", '\0'));
}*/
