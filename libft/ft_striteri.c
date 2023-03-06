/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:16:17 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 12:10:09 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void ft_toupper(unsigned int d, char *h)
// {
// 	(void) d;
//     if (*h >= 'a' && *h <= 'z')
//     {
//          *h = *h - 32;
//     }
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	if (f)
	{
		while (s[i])
		{
			f (i, &s[i]);
			i++;
		}
	}
}
// int main()
// {
//     char str[] = "Je suis moi";
//     ft_striteri(str, ft_toupper);
//     printf("%s", str);
// }
