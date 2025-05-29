CC 					:= cc
CFLAGS 				:= -Wall -Wextra -Werror
NAME 				:= libftprintf.a 

INCLUDES			:= -I. -I./libft

SRCS = 	ft_printf.c ft_print_va_str.c ft_print_va_chr.c		\
		ft_print_va_int.c ft_print_va_uint.c				\
		ft_print_va_ptr.c ft_print_va_hex.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o : %.c ft_printf.h Makefile 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

PHONY: all clean fclean re
