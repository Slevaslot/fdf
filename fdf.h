#ifndef FDF_H
#define FDF_H

#include "libft/libft.h"
#include "get_next_line/get_next_line.h"
#include "minilibx-linux/mlx.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct fdf
{

	int height;
	int width;
	int		**z;
	void	*mlx_ptr;
	void	*win_ptr;

}   fdf;

void	read_file(char *file_n, fdf *data);
int		wd_counter (char *str, char sep);
int		ft_countword(char const *s, char c);
void	algorithm_bresenham(int x, int y, int x1, int y2, fdf *data);
void	put_pxl(fdf *data);


#endif
