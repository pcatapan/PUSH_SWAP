# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 17:30:19 by pcatapan          #+#    #+#              #
#    Updated: 2022/02/10 19:48:09 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

SRCS = push_swap.c \
		ft_lstnew.c \

OBJS = ${SRCS:.c=.o}
RM = rm -f
FLAGS = -Wall -Werror -Wextra
INCS = .
LIBC = ar -rcs

.c.o :
	${CC} ${FLAG} -c $< -o ${<:.c=.o} -I${INCS}
	
$(NAME) : ${OBJS}
	make -C ./LIBFT
	${LIBC} ${NAME} ${OBJS}
	
all: $(NAME)

fclean: clean
	${RM} -f $(NAME)

re: fcelan all

.PHONY:all clean fclean re .c.o