# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flima <flima@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 21:12:39 by flima             #+#    #+#              #
#    Updated: 2024/10/16 18:11:24 by flima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -name "*.c" ! -name "*_bonus.c")

OBJS = $(SRCS:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	 all clean fclean re