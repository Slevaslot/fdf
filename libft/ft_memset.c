/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:55:26 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 12:01:01 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t count)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < count)
	{
		str[i] = val;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int    main(void)
{
     char    str[] = "Bpnknk";

     printf("%s\n", str);
     ft_memset(str, '0', 4);
     printf("%s", str);
}
*/
