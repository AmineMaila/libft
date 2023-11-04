/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:27:29 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/03 17:50:35 by mmaila           ###   ########.fr       */
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
/*#include <stdio.h>
#include <string.h>
int main ()
 {
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    void *ret;
	void	*ret2;
    ret = ft_memchr(tab, -1, 7);
	ret2 = memchr(tab, -1, 7);

    if (ret != NULL)
        printf("Found %d at index %ld\n", *(int *)ret, ((int *)ret - tab));
    else
        printf("%d not found\n", -1);
	
    if (ret2 != NULL)
        printf("Found %d at index %ld\n", *(int *)ret2, ((int *)ret2 - tab));
    else
        printf("%d not found\n", -1);
    return(0);
 }*/
