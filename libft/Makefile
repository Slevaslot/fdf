# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 17:54:35 by slevaslo          #+#    #+#              #
#    Updated: 2023/02/24 19:15:01 by slevaslo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c \
        ft_bzero.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_itoa.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_memset.c \
        ft_putchar_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c \
        ft_split.c \
        ft_strchr.c \
        ft_strdup.c \
        ft_striteri.c \
        ft_strjoin.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_strlen.c \
        ft_strmapi.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_strtrim.c \
        ft_substr.c \
        ft_tolower.c \
        ft_toupper.c \
	ft_printf.c \
	ft_putnbr_base.c \


# SRCS =	ft_putstr_fd.c \
# 	ft_itoa.c \
# 	ft_strlen.c \
# 	ft_putchar_fd.c \
	# ft_putnbr_fd.c
OBJS = ${SRCS:.c=.o}

SRCSBONUS =	        ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJSBONUS	= ${SRCSBONUS:.c=.o}

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: ${NAME}

$(NAME): $(OBJS)
			ar rc libft.a $(OBJS)


bonus: ${OBJS} ${OBJSBONUS}
			ar -rc ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			${RM} ${NAME}

re: fclean all


.PHONY:		bonus all clean fclean re
