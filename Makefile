SRCS =	./srcs/main.c \
./srcs/operations.c \
./srcs/operations2.c \
./srcs/operations3.c \
./srcs/sort.c \
./srcs/sort2.c \
./srcs/find.c \
./srcs/calculate_steps.c \
./srcs/check.c \
./srcs/min.c \
./srcs/reverse.c \
./srcs/utils.c \

NAME = push_swap
CC = gcc
CFLAGS =  -Wall -Wextra -Werror
LIBFT = ./library/libft/libft.a
FT_PRINTF = ./library/printf/libftprintf.a
RM = rm -rf
LIBC = ar -rcs

all: ${NAME}

${NAME}: $(SRCS) $(FT_PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	@echo "\033[1;32m$(NAME) is ready! 🚀\033[0m"

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

.PHONY: all clean fclean re 