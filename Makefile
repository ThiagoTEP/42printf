
NAME= libftprintf.a
CC= cc
FLAG= -Wall -Werror -Wextra
OBJ= $(SRC:.c=.o)
SRC= ft_printf.c ft_putchar.c ft_putnbr_hex.c ft_putnbr.c\
	 ft_putstr.c ft_putpointer.c ft_putnbr_un.c
        
AR = ar
RCS = rcs
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(RCS) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $(SRC)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re