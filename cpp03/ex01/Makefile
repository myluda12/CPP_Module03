
   
NAME =	ClapTrap

SRC =	ClapTrap.cpp\
		main.cpp\
		ScavTrap.cpp\


OBJS = ${SRC:.cpp=.o}



 CC = clang++

all : $(NAME)

$(NAME) : ${OBJS}
		
		$(CC) $(SRC) -o  $(NAME)  -Wall -Wextra -Werror -g

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all