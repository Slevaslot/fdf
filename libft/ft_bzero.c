/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:55:26 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 19:20:14 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t count)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < count)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int main()
// {
// 	char	*str;
// 	str = malloc(sizeof(char) * 5);
// 	ft_strlcpy(str, "hey", 5);
// 	ft_bzero(str, 4);
// 	int	i;
// 	i = 0;
// 	while(str[i])
// 	{
// 		printf("%s", str);
// 		i++;
// 	}
// }
