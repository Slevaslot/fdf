/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:43:29 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/15 17:53:02 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi_for_1char(const char str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;

	if (str >= '0' && str <= '9')
	{
		res = res * 10 + str - '0';
		i++;
	}
	return (res * sign);
}
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     printf("%d",ft_atoi(argv[1]));
// }
