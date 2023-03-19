#include "fdf.h"

int move_key(int key, fdf *data)
{
	if (key == 97)
        data->move = 0;
	return (0);
}

// if (argc != 2)
	// {
	// 	ft_printf("\033[31mError: Bad arguments\n\e[0m");
	// 	ft_printf("wrong number of parameter ex : ./a.out <map.dfd>");
	// 	return (0);
	// }


int main(int argc, char **argv)
{
    // (void)argv;
    (void)argc;
    fdf *data;
    data = malloc(sizeof(fdf) * 1);
    if (!data)
        return (-1);
    data->height = 0;
    data->width = 0;
    data->move = 150;
    data->zoom = 20;
    // data = 0;
    data->z = NULL;
    data->mlx_ptr = 0;
    read_file(argv[1], data);
    printf("%d", data->z[1][3]);
    data->mlx_ptr = mlx_init();
    if (!data->mlx_ptr)
    {
        free(data);
        return (-1);
    }
    if (data->mlx_ptr == NULL)
        return (0);
    data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "FDF");
    put_pxl(data);
    // printf("3wdawda\n");
    if (!data->win_ptr)
    {
        mlx_destroy_display(data->mlx_ptr);
        free(data);
        return (-1);
    }
    mlx_loop(data->mlx_ptr);
    return (0);
}
