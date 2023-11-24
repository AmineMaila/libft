/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:43:23 by mmaila            #+#    #+#             */
/*   Updated: 2023/11/24 17:13:55 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	calcresult(const char *str, int sign, int i)
{
	long int	result;
	long int	resulttemp;

	result = 0;
	resulttemp = 0;
	while (ft_isdigit(str[i]))
	{
		resulttemp = result * 10 + (str[i] - '0');
		if (resulttemp < result && sign == 1)
			return (-1);
		else if (resulttemp < result && sign == -1)
			return (0);
		result = resulttemp;
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return ((int)calcresult(str, sign, i));
}