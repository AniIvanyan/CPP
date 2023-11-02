NAME = main

SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all