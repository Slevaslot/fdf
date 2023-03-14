#include "fdf.h"
#define MAX1(a, b) (a > b ? a : b)

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

void algorithm_bresenham(float x, float y, float x1, float y1, fdf *data)
{

	float x_step;
	float y_step;
	int max;
	int z;
	int z1;

	z = data->z[(int)y][(int)x];
	z1 = data->z[(int)y1][(int)x1];
	(void)z1;
	(void)z;
	if (data->z[(int)y][(int)x] != 0)
		data->color = 0xe80c0c;
	else
		data->color = 0xffffff;

	projection_isometrique(&x, &y, z);
	projection_isometrique(&x1, &y1, z1);

	x *= 10;
	y *= 10;
	x1 *= 10;
	y1 *= 10;

	// x += 150;
	// y += 150;
	// x1 += 150;
	// y1 += 150;

	x_step = x1 - x;
	y_step = y1 - y;
	// je viens recuperer le plus long chemin a faire (vers bas ou gauche droite)
	max = max_one(x_step, y_step);
	x_step /= max;
	y_step /= max;
	//mtn j'avance en placant mes points grace a la soustraction, le nombre d'etape recup
	while((int)(x - x1) || (int)(y - y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, x, y, data->color);
		x += x_step;
		y += y_step;
	}
}

void	test_draw_without_3d(fdf *data, int x, int y)
{

	while(x < data->height)
	{
		y = 0;
		while (y < data->width)
		{
			if (data->z[x][y] != 0)
				mlx_pixel_put(data->mlx_ptr, data->win_ptr,x, y, 0xFFFF00FF);
			y++;
		}
		x++;
	}
}

void	put_pxl(fdf *data)
{
	int	x;
	int	y;

	y = 0;
	while(y < data->height)
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
	// test_draw_without_3d(data, x, y);
}
