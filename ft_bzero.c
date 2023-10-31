/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:54:11 by mmaila            #+#    #+#             */
/*   Updated: 2023/10/31 17:42:45 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
		*(unsigned char *)(s + i++) = 0;
}
/*
#include <stdio.h>

int main()
{
	char arr[] = "xddd";
	ft_bzero(arr, 4);
	printf("%s\n", arr);
}*/