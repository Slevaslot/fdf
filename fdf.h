#ifndef FDF_H
#define FDF_H

#include "libft/libft.h"
#include "get_next_line/get_next_line.h"
#include "minilibx-linux/mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

typedef struct fdf
{

	int height;
	int width;
	int		**z;
	void	*mlx_ptr;
	void	*win_ptr;
	int	*mlx_img;
	int color;
	int move;
	int zoom;
}   t_data;

typedef struct Point2D
{
    int x;
    int y;
} Point2D;

void	read_file(char *file_n, t_data *data);
int		wd_counter (char *str, char sep);
int		ft_countword(char const *s, char c);
void algorithm_bresenham(float x, float y, float x1, float y1, t_data *data);
void	put_pxl(t_data *data);
float iso_project_forx(float x, float y);
float iso_project_fory(float x, float y, int z);
void	projection_isometrique(float *x, float *y, int z);






#endif
