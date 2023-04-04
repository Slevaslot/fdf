#include "fdf.h"

int	max_one(int a, int b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	if (a > b)
		return (a);
	else
		return (b);
}

void	moveandzoom(float *x, float *x1, float *y, float *y1)
{
	*x = *x + 200;
	*y += *y + 200;
	*x1 += *x1 + 200;
	*y1 += *y1 + 200;
}

void	algorithm_bresenham(float x, float y, float x1, float y1, t_data *data)
{
	float	x_step;
	float	y_step;
	int		max;
	int		z[2];

	z[0] = data->z[(int)y][(int)x];
	z[1] = data->z[(int)y1][(int)x1];
	if (z[0] != 0)
		data->color = 0xe80c0c;
	else
		data->color = 0xffffff;
	projection_isometrique(&x, &y, z[0]);
	projection_isometrique(&x1, &y1, z[1]);
	x_step = (x1 - x);
	y_step = (y1 - y);
	max = max_one(x_step, y_step);
	x_step /= max;
	y_step /= max;
	while ((int)(x - x1) || (int)(y - y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, x, y, data->color);
		x += x_step;
		y += y_step;
	}
}

void	put_pxl(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (y < data->height)
	{
		x = 0;
		while (x < data->width)
		{
			if (x < data->width - 1)
				algorithm_bresenham(x, y, x + 1, y, data);
			if (y < data->height - 1)
				algorithm_bresenham(x, y, x, y + 1, data);
			x++;
		}
		y++;
	}
}
