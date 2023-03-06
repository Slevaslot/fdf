/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:21:48 by levaslot          #+#    #+#             */
/*   Updated: 2022/11/26 14:53:19 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(uintptr_t nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (nbr == 0)
		return (write(1, "0", 1));
	if (check_base(base))
	{
		while (nbr)
		{
			nbr_final[i++] = nbr % ft_strlen(base);
			nbr = nbr / ft_strlen(base);
		}
		size_base = i;
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
	return (size_base);
}

int	pp(uintptr_t nbr)
{
	int		size_base;
	int		nbr_final[100];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	size_base = 0;
	while (nbr)
	{
		nbr_final[i++] = nbr % 16;
		nbr = nbr / 16;
	}
	size_base = i;
	while (--i >= 0)
		ft_putchar(base[nbr_final[i]]);
	return (size_base);
}
