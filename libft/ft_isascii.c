/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:50 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/14 18:05:32 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c;
//     c = '1';
//     printf("%d\n", ft_isascii(c));
//     printf("%d\n", isdigit(c));
// }
