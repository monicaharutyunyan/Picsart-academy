NAME = classwork

CPP = g++

CPPFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.cpp)

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

RM = rm -f

%.o : %.cpp
	@ $(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	@ $(CPP) -o $(NAME) $(OBJS) $(CPPFLAGS) 
	@echo "$(GREEN)✅$(NAME) created!$(DEFAULT)"
clean:
	@ $(RM) $(OBJS)
	@echo "$(YELLOW)Object files deleted!$(DEFAULT)"
fclean: clean
	@ $(RM) $(NAME)
	@echo "$(RED)All deleted!$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean re


RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m

