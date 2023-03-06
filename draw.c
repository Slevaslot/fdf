#include "fdf.h"
#define MAX1(a, b) (a > b ? a : b)
#define NEGPOS(a) ((a < 0) ? -a : a)
void	algorithm_bresenham(int x, int y, int x1, int y1, fdf *data)
{
	float x_step;
	float y_step;
	int max;
	// je viens recuperer le plus long chemin a faire (vers bas ou gauche droite)
	x_step = x1 - x;
	y_step = y1 - y;

	max = MAX1(NEGPOS(x_step),NEGPOS(y_step));

	x_step /= max;
	y_step /= max;
	//mtn j'avance en placant mes points grace a la soustraction, le nombre d'etape recup
	while((int)x - x1 || (int)y - y1)
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr,x, y, 0xFFFF00FF);
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
			algorithm_bresenham(data->z[x][y], data->z[x][y + 1], data->z[x + 1][y], data->z[x + 1][y + 1], data);
			y++;
		}
		x++;
	}
	// test_draw_without_3d(data, x, y);

}
