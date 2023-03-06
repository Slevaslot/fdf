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

void	put_pxl(fdf *data)
{
	int	x;
	int	y;

	x = 50;
	y = 200;
	while(x < data->height)
	{
		y = 0;
		while (y < data->width)
		{
			algorithm_bresenham(data->z[x][y], data->z[x][y], data->z[x][y], data->z[x][y] + 5, data);
			y++;
		}
	}
}
