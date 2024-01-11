# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 15:55:01 by ekrebs            #+#    #+#              #
#    Updated: 2023/12/17 18:55:51 by ekrebs           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = debug.out

SRCS =	debug_main.c							\
		tests.c									\
		\
		utils/affichage/ft_printf_chars.c		\
		utils/affichage/ft_section.c			\
		utils/affichage/ft_setcolors.c			\
		utils/affichage/ft_space.c				\
		utils/affichage/ft_sub_section.c		\
		utils/affichage/ft_title.c				\
		\
		utils/comparaisons/ft_strncmp.c			\

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -g3 -fsanitize=address

# -------------------------- [Targets :] ----------------------------- #

all : $(NAME) fclean

$(NAME) : $(SRCS)
	@echo "\n\nArchiving libftprintf.a..."
	make -C ../ all
	@echo "done.\n"

	@echo "\n\nCompiling..."
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) ../libftprintf.a
	@echo "done."
	./$(NAME)

clean : #nettoyer les .o
	@echo "\n\nCleaning debug objects...";
	rm -f $(OBJS)
	@echo "done."

fclean : clean #nettoyer les .o et le 'main'
	@echo "\n\nPurifying archive by fire..."
	rm -f $(NAME)
	@echo "done.\n\n"

re : fclean all

.PHONY : all bonus clean fclean re



