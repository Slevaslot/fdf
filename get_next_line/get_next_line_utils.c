/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:57:45 by slevaslo          #+#    #+#             */
/*   Updated: 2022/12/14 16:56:18 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr( const char *string, int searchedChar )
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)string;
	if (!str)
		return (0);
	if (searchedChar == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0' && str[i] != (char)searchedChar)
	{
		i++;
	}
	if (str[i] != (char)searchedChar)
		return (0);
	return (&str[i]);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	j = 0;
	if (!s1)
		s1 = ft_calloc(1, 1);
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (free((char *)s1), str);
}

char	*left_new_line(char *buff)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!buff[0])
		return (free(buff), NULL);
	while (buff[i] && buff[i] != '\n')
		i++;
	if (!buff[i])
	{
		free(buff);
		return (NULL);
	}
	str = ft_calloc (sizeof(char), ft_strlen(buff) - i + 1);
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (buff[i])
		str[j++] = buff[i++];
	free (buff);
	return (str);
}

char	*new_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	line = ft_calloc(sizeof(char), i + 1);
	if (!line)
		return (NULL);
	i = -1;
	while (str[++i] && str[i] != '\n')
		line[i] = str[i];
	if (str[i] == '\n')
		line[i++] = '\n';
	return (line);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	tab = NULL;
	if (count * size == 0 || count <= SIZE_MAX / size)
		tab = (void *)malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
