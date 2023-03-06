/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:14:09 by slevaslo          #+#    #+#             */
/*   Updated: 2022/12/10 16:41:51 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define SIZE_MAX (18446744073709551615UL)

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../libft/libft.h"
char	*ft_strchr( const char *string, int searchedChar );
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*left_new_line(char *buff);
char	*left_read(int fd, char *str);
char	*new_line(char *str);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*get_next_line(int fd);
void	ft_bzero(void *ptr, size_t count);
#endif
