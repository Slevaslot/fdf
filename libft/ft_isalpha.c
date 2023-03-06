/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:03:28 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/14 18:04:09 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//     int c;
//     c = 'a';
//     printf("%d\n", ft_isalpha(c));
//     printf("%d\n", isalpha(c));
// }
