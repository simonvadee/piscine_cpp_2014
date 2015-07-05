NAME	= 	my_cat

RM	=	rm -f

CC	=	g++

SRC	=	my_cat.cpp

OBJ	=	$(SRC:.cpp=.o)

CFLAGS	+=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):		$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all


.PHONY:		all clean fclean re
