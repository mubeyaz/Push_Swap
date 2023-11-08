SRCS =	./srcs/main.c \
./srcs/operations.c \
./srcs/operations2.c \
./srcs/operations3.c \
./srcs/sort.c \
./srcs/ftsort2.c \
./srcs/find_steps.c \
./srcs/calculate_steps.c \
./srcs/check_functions.c \
./srcs/fsort_min.c \
./srcs/fsort_reverse.c \
./srcs/fsort_utils.c \

NAME = push_swap
CC = gcc
CFLAGS =  -Wall -Wextra -Werror
LIBFT = ./library/libft/libft.a
FT_PRINTF = ./library/printf/libftprintf.a
RM = rm -rf
LIBC = ar -rcs

all: ${NAME}

$(NAME): $(SRCS) $(FT_PRINTF) $(LIBFT)
	@gcc $(CFLAGS) $(SRCS) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "-*-*-*-*-OK-*-*-*-*-"

$(FT_PRINTF):
	@make -C ./library/printf

$(LIBFT):
	@make -C ./library/libft

clean:

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./library/printf
	@make fclean -C ./library/libft

re: fclean all

.PHONY: all bonus clean fclean re 