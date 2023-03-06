/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:27:24 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/26 14:50:52 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
int		ft_putstr_special (char *str, int start)
{
	while (str[start])
	{
		write(1, &str[start++], 1);
		if (str[start + 1] == '%' && str[start + 2] == 's' || 'd' || 'x' || 'X' || 'c')
			return (start);
	}
	return (start);
}
*/
int	ft_putchar_return(char c)
{
	return (write(1, &c, 1));
}

int	ft_printnbr(int n)
{
	int		len;
	char 	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_putstr_fd(num, 1);
	free(num);
	return (len);
}

int	conversion(const char format, va_list args)
{
	void	*p;

	if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (format == 'd' || format == 'i')
		return (ft_printnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), D));
	if (format == 'c')
		return (ft_putchar_return(va_arg(args, int)));
	if (format == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), XM));
	if (format == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), X));
	if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_putstr_fd("0x", 1) + pp((unsigned long long)p));
		return (write(1, "(nil)", 5));
	}
	return (ft_putchar_return(format));
}

int	ft_3d(int n, const char nbr)
{
	char *num;
	char *output;
	int	i;
	int	j;
	int nu;
	int y;

	j = 0;
	i = 0;
	num = ft_itoa(n);
	nu = ft_strlen(num);
	y = ft_atoi_for_1char(nbr);
	output = malloc(sizeof(y - nu) + 1);
	while(j < y - nu + 1)
	{
		output[i++] = ' ';
		j++;
	}
	//output = ft_itoa(n);
	i = 0;
	ft_putstr_fd(output, 1);
	ft_printnbr(n);
	free(output);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	va_list	args;

	count = 0;
	i = 0;
	if (!format)
		return (0);
	va_start(args, format);
	if (format[i] == '%' && format[i + 1] == '3')
		return (ft_3d(va_arg(args, int), format[i + 1]));
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += conversion (format[i + 1], args);
			i ++;
		}
		else
			count += ft_putchar_return(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main()
{
	//char	*str = "hey";
	//printf("%d", conversion("hey %s yo %s %X %p\n", "hey",
	 "saperlipopette", 123, &str[2]));
	//printf("\n%d\n", printf("%p", 0));
	//printf("\n%d\n", ft_printf("%p", 0, 0, 0));
	char *str = NULL;
	ft_printf(NULL);
	printf(NULL);
    //conversion("hey %s yo %s %X %p\n", "hey", "saperlipopette", 123, &str[2]);
    //printf("%p", &str[2]);
    // conversion("%s", "hey");
    // conversion("%c", 'c');
}
*/
