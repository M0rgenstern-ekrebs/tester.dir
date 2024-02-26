NAME = a.out
NAME_DEBUG = a.debug.out

SRCS_GNL =	../*.gnl/get_next_line.c			\
			../*.gnl/get_next_line_utils.c	

SRCS_DEBUG = debug_main.c	\
			 debug_utils.c	\
			 debug_tests.c	

CC = cc

CLFAGS = -Wall -Wextra 
DEBUG_FLAGS = -g3 

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS_GNL)

clean : 
	rm -f *.o

fclean : clean
	rm -f *.out

re : fclean all

clear :
	clear

#TODO: BUFFER_SIZE 1 - 10 - 1 000 000
debug : fclean clear
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -fsanitize=address -D BUFFER_SIZE=1
	./a.out || lldb a.out
	@echo "\n\n"
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -fsanitize=address -D BUFFER_SIZE=10
	./a.out || lldb a.out
	@echo "\n\n"
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -fsanitize=address -D BUFFER_SIZE=1000000
	./a.out || lldb a.out
	@echo "\n\n\t\tDone 🌟"

leaks :
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -D BUFFER_SIZE=1
	valgrind -s ./a.out
	@echo "\n\n"
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -D BUFFER_SIZE=10
	valgrind -s ./a.out
	@echo "\n\n"
	$(CC) $(CFLAGS) $(SRCS_GNL) $(SRCS_DEBUG) $(DEBUG_FLAGS) -D BUFFER_SIZE=1000000
	valgrind -s ./a.out
	@echo "\n\n"
	@echo "\t\tDone 🌟"
	
norm :
	clear
	@norminette $(SRCS_GNL) ../*.h || echo ""

.PHONY : all clear $(NAME) re clean fclean debug leaks norm