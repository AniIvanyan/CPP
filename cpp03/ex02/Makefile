NAME = frag

SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)
CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: $(NAME)

.c.o:
	$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all