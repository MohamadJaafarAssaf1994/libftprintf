NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c \
       ft_printf_characters.c \
       ft_printf_decimals.c \
       ft_printf_lowercase_hexadecimals.c \
       ft_printf_uppercase_hexadecimals.c \
       ft_printf_pointers.c \
       ft_printf_percentage.c \
       ft_printf_strings.c \
       ft_printf_unsigned_decimals.c \
       ft_count_hexa.c \
       ft_hexa_lower.c \
       set_flags.c \
       ft_printf_all.c \
       precision_flag.c \
       width_flag.c \
       max.c \
       zero_flag.c \
       ft_strlen_v2.c \
       ft_string.c \
       plus_or_space_flag.c \
       plus_or_space_flag_count.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all bonus clean fclean re
