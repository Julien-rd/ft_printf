CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
SRC = $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_printf_utils.c
OBJ = $(SRC_DIR)/ft_printf.o $(SRC_DIR)/ft_printf_utils.o
NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(SRC_DIR)/ft_printf.o: $(SRC_DIR)/ft_printf.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $(SRC_DIR)/ft_printf.c -o $(SRC_DIR)/ft_printf.o

$(SRC_DIR)/ft_printf_utils.o: $(SRC_DIR)/ft_printf_utils.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $(SRC_DIR)/ft_printf_utils.c -o $(SRC_DIR)/ft_printf_utils.o

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

test: re
	cc -Wall -Wextra -Werror test.c libftprintf.a
