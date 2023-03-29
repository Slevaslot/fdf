
#include "fdf.h"

int get_height(char *file_n)
{
	int fd;
	int height;
	char *line;

	fd = open(file_n, O_RDONLY, 0);
	height = 0;
	line = get_next_line(fd);
	while(line)
	{
		free(line);
		line = get_next_line(fd);
		height++;
	}
	// free(line);
	close(fd);
	return (height);
}

int get_width(char *file_n)
{
	int fd;
	int width;
	char *line;

	fd = open(file_n, O_RDONLY, 0);
	width = 0;

	line = get_next_line(fd);
	width = wd_counter(line, ' ');
	free(line);
	close(fd);
	return (width);
}

void	fullfill_matrix(int *z_line, char *line)
{
	char **str;
	int i;

	i = -1;
	str = ft_split(line, ' ');

	while(str[++i])
	{
		z_line[i] = ft_atoi(str[i]);
		free(str[i]);
	}
	free(str);
}

void	read_file(char *file_n, t_data *data)
{
	int		fd;
	int		i;
	char	*line;

	data->height = get_height(file_n);
	data->width = get_width(file_n);
	data->z = malloc(sizeof(int *) * (data->height) + 1);

	i = -1;
	while(++i < data->height)
		data->z[i] = (int *)malloc(sizeof(int) * (data->width) + 500);
	fd = open(file_n, O_RDONLY);
	line = get_next_line(fd);
	i = -1;
	while(line)
	{
		fullfill_matrix(data->z[++i], line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	// data->z[i] = NULL;
	//utiliser les donnees pour malloc les mettres dans un double tableau d'entier
}
