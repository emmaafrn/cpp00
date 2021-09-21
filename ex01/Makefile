NAME = PhoneBook

SRCS = main.cpp contact.cpp PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

INC = contact.hpp PhoneBook.hpp

CC  = g++

RM  = rm -f

INC_CMP = $(addprefix -I, $(INC))

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):	$(INC)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re