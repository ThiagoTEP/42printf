
NAME= libftprintf.a
CC= cc
FLAG= -Wall -Werror -Wextra
OBJ= $(SRC:.c=.o)
SRC= ft_printf.c 
        
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

.PHONY:		all clean fclean re