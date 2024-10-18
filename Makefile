# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flima <flima@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 21:12:39 by flima             #+#    #+#              #
#    Updated: 2024/10/18 12:40:39 by flima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -name "*.c" ! -name "*_bonus.c")

SRCS_BONUS = $(shell find . -name "*_bonus.c")

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS_BONUS)
	
clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	 all clean fclean re