#include "fdf.h"

int move_key(int key, t_data *data)
{
	if (key == 97)
        data->move = 0;
	return (0);
}

void    final_free(t_data *data)
{
    int i = -1;
    while(++i < data->height)
        free(data->z[i]);
    free(data->z);
    free(data->mlx_img);
    // free(data->win_ptr);
    free(data->mlx_ptr);
}

int del_key(int key, t_data *data)
{
	if (key == 65307)
    {
        // free(data);
        mlx_destroy_window(data->mlx_ptr, data->win_ptr);
        mlx_destroy_display(data->mlx_ptr);
        final_free(data);
        free(data);
        exit(0);
        // free(data->mlx_ptr);
    }
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
    t_data *data;
    data = malloc(sizeof(t_data) * 1);
    if (!data)
        return (-1);
    data->height = 0;
    data->width = 0;
    data->move = 150;
    data->zoom = 20;
    read_file(argv[1], data);
    data->mlx_ptr = mlx_init();
    if (!data->mlx_ptr)
    {
        free(data);
        return (-1);
    }
    if (data->mlx_ptr == NULL)
        return (0);
    data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "FDF");
    if (!data->win_ptr)
    {
        mlx_destroy_display(data->mlx_ptr);
        free(data);
        return (-1);
    }
    put_pxl(data);
    mlx_key_hook(data->win_ptr,del_key, data);
    mlx_loop(data->mlx_ptr);
    return (0);
}
