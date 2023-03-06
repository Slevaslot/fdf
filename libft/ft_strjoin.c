/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:55:10 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/15 14:44:38 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
	char		*str;
	size_t		len1;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	str = malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[len1] = s2[i];
		i++;
		len1++;
	}
str[len1] = '\0';
	return (str);
}
/*
int main()
{
     printf("%s", ft_strjoin("wdaw", "dwad"));
}
*/
