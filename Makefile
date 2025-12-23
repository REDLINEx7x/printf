CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_print_lower_hex.c ft_print_upper_hex.c ft_unsigned.c ft_print_ptr.c

OBJ = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
