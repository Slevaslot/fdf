#include "fdf.h"
#define MAX1(a, b) (a > b ? a : b)
#define NEGPOS(a) ((a < 0) ? -a : a)
#define ISO_ANGLE 0.1236

int iso_project_forx(int x, int y)
{
    return (x - y) * cos(ISO_ANGLE) * 2;
}

int iso_project_fory(int x, int y, int z)
{
    return -z + (x + y) * sin(ISO_ANGLE) * 2;
}

void algorithm_bresenham(int x, int y, int x1, int y1, fdf *data)
{

	float x_step;
	float y_step;
	int max;
	int i = 0;


	if (data->z[x][y] != 0)
		data->color = 0xe80c0c;
	else
		data->color = 0xffffff;
    // x = iso_project_forx(x * 20, y * 20);
    // y = iso_project_fory(x * 20, y * 20, data->z[y][x]);
    // x1 = iso_project_forx(x1 * 20, y1 * 20);
    // y1 = iso_project_fory(x1 * 20, y1 * 20, data->z[y1][x1]);

	x *= 10;
	y *= 10;
	x1 *= 10;
	y1 *= 10;

	x += data->move;
	y += data->move;
	x1 += data->move;
	y1 += data->move;

	// je viens recuperer le plus long chemin a faire (vers bas ou gauche droite)
	x_step = x1 - x;
	y_step = y1 - y;

	max = MAX1(NEGPOS(x_step),NEGPOS(y_step));

	x_step /= max;
	y_step /= max;
	//mtn j'avance en placant mes points grace a la soustraction, le nombre d'etape recup
	while((int)x - x1 || (int)y - y1)
	{
		data->mlx_img[i] = mlx_pixel_put(data->mlx_ptr, data->win_ptr,x, y, data->color);
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
			if (data->z[x][y] == 10)
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

	x = 0;
	y = 0;
	while(x < data->height - 1)
	{
		y = 0;
		while (y < data->width - 1)
		{
			algorithm_bresenham(x, y, x, y + 1, data);
			algorithm_bresenham(x, y, x + 1, y, data);
			y++;
		}
		x++;
	}
	// test_draw_without_3d(data, x, y);
}
