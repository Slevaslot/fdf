/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:08:48 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 12:53:28 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *string, int searchedChar )
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)string;
	while (str[i] != '\0' && str[i] != (char)searchedChar)
	{
		i++;
	}
	if (str[i] != (char)searchedChar)
		return (NULL);
	return (&str[i]);
}
/*
int main()
{
     char str[] = "hdgwadh";
     int hey = 'g';
        printf("%s", ft_strchr(str, hey));
}
*/
