#include "fdf.h"

int		wd_counter (char *str, char sep)
{
	int	i;
	int	y;
	//int	j;

	i = 0;
	y = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			while(str[i] && str[i++] != sep)
				;
			y++;
		}
	}
	return (y + 1);
}

int		ft_countword(char const *s, char c)
{
	int cpt;

	cpt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			while (*s && *s++ != c)
				;
			cpt++;
		}
	}
	return (cpt + 1);
}

	// int	i;
	// int	y;
	// int	j;

	// i = 0;
	// y = 0;
	// while(str[i])
	// {
	// 	if (str[i] == sep)
	// 			j = 1;
	// 	if (str[i] != sep && j == 1)
	// 	{
	// 		y++;
	// 		j = 0;
	// 	}
	// 	i++;
	// }
	// return (y);
