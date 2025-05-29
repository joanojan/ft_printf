NAME 		:= libftprintf.a 
CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror

LIBFT_DIR	:= libft/
LIBFT		:= $(LIBFT_DIR)/libft.a

INCLUDES	:= -I. -I$(LIBFT_DIR)

SRCS :=	\
		ft_printf.c			\
		ft_print_va_str.c	\
		ft_print_va_chr.c	\
		ft_print_va_int.c	\
		ft_print_va_uint.c	\
		ft_print_va_ptr.c	\
		ft_print_va_hex.c

OBJS := $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o : %.c ft_printf.h Makefile 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@	

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
