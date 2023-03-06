/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:21:34 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 11:49:26 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	while (str[i] == str1[i] && i < n - 1)
	{
		i++;
	}
	if (str[i] == str1[i])
		return (0);
	return ((int)(str[i] - str1[i]));
}
/*
int main()
{
char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 5};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

    printf ("%d",ft_memcmp(s, sCpy, 4));
}
*/
