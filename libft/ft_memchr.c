/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:37:26 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 12:08:51 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	size_t			i;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (str1[i] == (unsigned char)c)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}
