/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:05:02 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/26 15:13:08 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SIZE_MAXOU 18446744073709551615UL
# define D "0123456789"
# define X "0123456789ABCDEF"
# define XM "0123456789abcdef"

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

// size_t	ft_strlen(const char *str);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_base(uintptr_t nbr, char *base);
int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
int		ft_print_ptr(uintptr_t nbr);
int		pp(uintptr_t nbr);
int	ft_atoi_for_1char(const char str);

#endif
