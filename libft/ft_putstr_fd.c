/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:54:09 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/26 14:57:09 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (write (1, "(null)", 6));
	if (!s)
		return (0);
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (i);
}

// int main()
// {
// 	ft_putstr_fd("hryy", 1);
// }
