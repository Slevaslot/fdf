/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:29:02 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/15 11:14:07 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *string, int searchedChar )
{
	int		i;
	char	*str;

	str = (char *)string;
	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)searchedChar)
	{
		if (str[i] == (char)searchedChar)
			return (&str[i]);
		i--;
	}
	if (str[i] == (char)searchedChar)
		return (&str[i]);
	return (NULL);
}
// #include <ctype.h>
// #include <stdio.h>
//  int main()
// {
//      char str[] = "hdgwadh";
//      int hey = 'g';
//         printf("%s", ft_strrchr(str, hey));
// }
