CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexlow.c ft_puthex.c ft_putpointer.c ft_putunsigned.c ft_printf.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all


