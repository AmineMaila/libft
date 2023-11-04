/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:34:01 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/03 21:23:57 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	populate(int n, char *arr, int count)
{
	if (n >= 10 || n <= -10)
		populate(n / 10, arr, count - 1);
	if (n < 0)
		arr[count] = ((n % 10) * -1) + '0';
	else
		arr[count] = (n % 10) + '0';
}

int	arrsize(int n)
{
	int	temp;
	int	i;

	i = 1;
	temp = n;
	while (temp >= 10 || temp <= -10)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		i;
	int		sign;

	sign = 1;
	i = arrsize(n);
	if (n < 0)
		i++;
	arr = (char *) malloc(i + 1);
	if (arr == NULL)
		return (NULL);
	if (n < 0)
		arr[0] = '-';
	populate (n, arr, i - 1);
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}*/