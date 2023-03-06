/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:16:17 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 20:40:02 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_toupper(unsigned int d, char h)
{
	(void) d;
	if (h >= 'a' && h <= 'z')
	{
		return (h - 32);
	}
	return (h);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char ) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s",ft_strmapi("hey", ft_toupper));
// }
