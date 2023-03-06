/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:50 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/14 18:13:58 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c;
//     c = '1';
//     printf("%d\n", ft_isprint(c));
//     printf("%d\n", isdigit(c));
// }
