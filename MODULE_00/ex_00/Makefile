NAME			= megaphone

DIR				= srcs
SRCS			= $(shell find $(DIR) -name *.cpp)
OBJECTS			= $(patsubst %.cpp, %.o, $(SRCS))
D_FILES			= ${patsubst %.cpp, %.d, ${SRCS}}

CC		= c++
CFLAGS	=	-Werror -Wall -Wextra -std=c++98

all	: 	$(NAME)

$(NAME): $(OBJECTS)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $(INCLUDES) $< -o $@

clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
