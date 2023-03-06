/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:15:01 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 19:05:05 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *destination, const void *source, size_t size )
{
	size_t	i;

	if (!destination && !source)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		((unsigned char *) destination)[i] = ((const char *) source)[i];
		i++;
	}
	return (destination);
}
/*
int main()
 {
        char str[] = "okadw]a";

        char str1[] = "yoyoyoy";
        ft_memcpy(str, str1, 4);
        printf("%s\n", str);
        printf("%s", str1);

 }
 */
