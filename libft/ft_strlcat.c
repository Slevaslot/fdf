/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:50:29 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 20:21:58 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if (!dest && size == 0)
		return (0);
	i = 0;
	a = ft_strlen(dest);
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] && a + 1 < size)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (ft_strlen(&src[i]) + ft_strlen(dest));
}
/*
int main()
{
	printf("%ld", ft_strlcat("hey", "yoooooo", 2));
}
*/
