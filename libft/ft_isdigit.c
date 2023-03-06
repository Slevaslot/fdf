/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:06:38 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/14 18:06:41 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c;
//     c = '1';
//     printf("%d\n", ft_isdigit(c));
//     printf("%d\n", isdigit(c));
// }
