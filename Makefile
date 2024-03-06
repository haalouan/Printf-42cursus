# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 21:33:22 by haalouan          #+#    #+#              #
#    Updated: 2023/12/05 13:35:04 by haalouan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c ft_big_x.c ft_x.c ft_d.c  ft_s.c  ft_c.c  ft_u.c  ft_p.c  

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

$(NAME):$(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

all: ${NAME}

%.o:	%.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re
