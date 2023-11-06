/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:59:42 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/06 01:25:38 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char xd(unsigned int xd, char xdd)
{
	return (xdd + xd);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *) malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*#include <stdio.h>
int main()
{
	char arr[] = "Hello world";
	printf("%s\n", ft_strmapi(arr, xd));
}*/
