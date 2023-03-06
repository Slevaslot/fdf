/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:50:54 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 11:57:26 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	if (length == 0)
		return (0);
	i = 0;
	while (first[i] && second[i] && first[i] == second[i] && i < length - 1)
		i++;
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
