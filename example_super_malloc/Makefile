# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:55:01 by ekrebs            #+#    #+#              #
#    Updated: 2024/01/08 18:13:12 by ekrebs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADERS = libftprintf.h

SRCS =	ft_printf.c					\
		\
		flags/ft_flag_c.c			\
		flags/ft_flag_s.c			\
		flags/ft_flag_p.c			\
		flags/ft_flag_d.c			\
		flags/ft_flag_i.c			\
		flags/ft_flag_u.c			\
		flags/ft_flag_x.c			\
		flags/ft_flag_upper_x.c		\
		flags/ft_flag_unknown.c		\
		\
		utils/ft_itoa.c				\
		utils/ft_putchar.c			\
		utils/ft_putstr.c			\
		utils/ft_strlen.c			\
		utils/ft_itox.c				\


OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -g3
DFLAGS = -g3 -fsanitize=address

# -------------------------- [Targets :] ----------------------------- #

all : $(NAME)

debug : fclean #$(DNAME)
#    clear
	make -C ./debug re
	rm -f $(OBJS)

norm :
	clear
	norminette $(SRCS) $(HEADERS)

#$(DNAME) :
#	make -C ./debug all
#	$(CC) $(CFLAGS) $(DFLAGS) $(SRCS) $(DSRCS) -o $(DNAME)
	
$(NAME) : $(OBJS)
	@echo "\n\nArchiving..."
	ar -rcs $(NAME) $(OBJS)
	@echo "done."

clean : #nettoyer les .o
	@echo "\n\nCleaning objects...";
	rm -f $(OBJS)
	@echo "done."

fclean : clean #nettoyer les .o et le 'main'
	@echo "\n\nPurifying archive by fire..."
	rm -f $(NAME)
	rm -f $(DNAME)
	@echo "done.\n\n"

re : fclean all

.PHONY : all bonus clean fclean re



