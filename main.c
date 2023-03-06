#include "fdf.h"

// int deal_key(int key)
// {
// 	ft_printf("%d", key);
// 	return (0);
// }

// if (argc != 2)
	// {
	// 	ft_printf("\033[31mError: Bad arguments\n\e[0m");
	// 	ft_printf("wrong number of parameter ex : ./a.out <map.dfd>");
	// 	return (0);
	// }


int main(int argc, char **argv)
{
    (void)argv;
    (void)argc;
    fdf *data = malloc(sizeof(fdf));
    if (!data)
        return (-1);

    data->height = 0;
    data->width = 0;
    data->z = NULL;
    read_file(argv[1], data);
    // int h = 0;
    // int w = 0;
    // while(h < data->height)
    // {
    //     w = 0;
    //     while (data->z[h][w])
    //     {
    //         printf("%3d", data->z[h][w]);
    //         w++;
    //     }
    //     h++;

    // }
    data->mlx_ptr = mlx_init();
    printf("1wdawda\n");
    if (!data->mlx_ptr)
    {
        free(data);
        return (-1);
    }
    printf("2wdawda\n");
    if (data->mlx_ptr == NULL)
        return (0);
    data->win_ptr = mlx_new_window(data->mlx_ptr, 500, 500, "FDF");
    put_pxl(data);
    if (!data->win_ptr)
    {
        mlx_destroy_display(data->mlx_ptr);
        free(data);
        return (-1);
    }
    printf("3wdawda\n");

    mlx_loop(data->mlx_ptr);

    return (0);
}
