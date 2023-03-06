/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:55:10 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 20:38:53 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int		ft_get_start(const char *s, const char *set)
{
	int 	i;
	int	j;

	j = 0;
	i = 0;
	if (!set || !s)
	{
		return (0);
	}

		while (s[i] != set[j] && s[i])
			i++;
		while (s[i] == set[j] && s[i])
			i++;
		if((s[i] != set[j])||(s[i] == set[j] && set[i+1] != set[j]))
			return (i);
		return (0);
}

static int		ft_get_end(const char *s, const char* set)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s) - 1;
	if (!s || !set)
	{
		return (0);
	}
		while (s[i] != set[j] && i > 0)
			i--;
		while (s[i] == set[j] && i > 0)
			i--;
		if((s[i] != set[j])||(s[i] == set[j] && set[i-1] != set[j]))
			return (i);
		return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (end == -1 || start == -1)
		return (0);
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}
*/

int	charcheck(char c, char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	k = -1;
	j = ft_strlen(s1);
	while (charcheck(s1[i], (char *)set) == 1)
		i++;
	while (charcheck(s1[j - 1], (char *)set) == 1)
		j--;
	if (set == NULL || !s1)
		return (0);
	if (i >= j)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * j - i + 1);
	if (!str)
		return (NULL);
	while (++k + i < j)
		str[k] = s1[k + i];
	str[k] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
     char s1[] = "sds  Je suis moi  sss";
     char set[] = "sds";

     printf("%s", ft_strtrim(s1, set));
}
*/
/*
int main()
{
    printf("%s", ft_strtrim("  he yy  ", " "));
}
*/
