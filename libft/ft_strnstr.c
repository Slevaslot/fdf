/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:38:28 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 11:51:25 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t			i;
	size_t			j;
	char			*big;
	char			*lit;

	i = 0;
	j = 0;
	if (!str && n == 0)
		return (0);
	big = (char *)str;
	lit = (char *)to_find;
	if (lit[j] == '\0')
		return (&big[i]);
	while (big[i] && i < n)
	{
		while (lit[j] && i + j < n && big[i + j] == lit[j])
			j++;
		if (lit[j] == '\0')
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char first[] = "bonjour je suis";
    char second[] = "je ";
    //ft_strnstr(first, second, 2);
    printf("%s", ft_strnstr(first, second, 5));
    return(0);
}
*/
