#include "fdf.h"

int	wd_counter(char *str, char sep)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			while (str[i] && str[i++] != sep)
				;
			y++;
		}
	}
	return (y);
}

int	ft_countword(char const *s, char c)
{
	int	cpt;

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

void	projection_isometrique(float *x, float *y, int z)
{
	*x *= 20;
	*y *= 20;
	*x += 400;
	*y += 100;
	*x = (*x - *y) * cos(0.8);
	*y = (*x + *y) * sin(0.8) - z;
}

float	iso_project_forx(float x, float y)
{
	return ((x - y) * cos(0.8));
}

float	iso_project_fory(float x, float y, int z)
{
	return ((x + y) * sin(0.8) - z);
}
