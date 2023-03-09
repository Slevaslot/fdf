PROG	= fdf
SRCS 	= main.c \
		read_file.c \
		draw.c \
		fdf_utils.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \



OBJS 	= ${SRCS:.c=.o} ${SRCS_LIBFT:.c=.o}
LIBS = libft/libft.a minilibx-linux/libmlx_Linux.a -lXext -lX11 -lm
#MAIN	= pipex.c

#SRCS_B	= srcs/pipex_bonus.c srcs/utils.c srcs/utils_bonus.c
#OBJS_B	= ${SRCS_B:.c=.o}
#MAIN_B	= pipex_bonus.c



CFLAGS 	= -Wall -Wextra -Werror
CC 		= gcc

.c.o:		%.o : %.c
					@gcc ${CFLAGS} -g3 -c $< -o $(<:.c=.o)

all: 		${PROG}

${PROG}:	${OBJS}
					@make -C libft/
					@$(CC) ${OBJS} ${LIBS} -o ${PROG}
					@echo "fdf Compiled!\n"


bonus:		${PROG_B}

${PROG_B}:	${OBJS_B}

					@echo "\fdf Bonus Compiled! \n"

clean:

					@rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					@rm -f $(NAME)
					@rm -f ${PROG}
					@echo "\nDelete ALL!\n"

re:			fclean all

re_bonus:	fclean bonus

.PHONY: all clean fclean re
