CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libftprintf.a

SRC = ft_printf.c ft_putnbr.c ft putstr.c ft_putchar.c

OBJ = (SRC:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@


all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY: all clean fclean bonus re
