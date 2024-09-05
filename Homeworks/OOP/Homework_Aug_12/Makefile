NAME = homework

UNAME := $(shell uname)

TMP = objs

ifeq ($(UNAME), Linux)
CXX = g++ -std=c++0x
else
CXX = g++ --std=c++0x
endif

CXXFLAGS = -I./includes -Wall -Wextra -Werror #-fsanitize=address -g

SRCS = $(wildcard src/*.cpp)

OBJS = $(patsubst src/%.cpp, ./$(TMP)/%.o, $(SRCS))

RM = rm -fr

HEADER = $(wildcard *.h)
HEADER += $(wildcard includes/*.h)

all: $(NAME)

./$(TMP)/%.o: ./src/%.cpp $(HEADER) Makefile
	@ $(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(TMP) $(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(TMP):
	@mkdir $(TMP)
	@echo "$(GREEN)✅$(NAME) created!$(DEFAULT)"

clean:
	@ $(RM) $(TMP)
	@echo "$(YELLOW)Object files deleted!$(DEFAULT)"

fclean: clean
	@ $(RM) $(NAME)
	@echo "$(RED)All deleted!$(DEFAULT)"

re:	fclean all

.PHONY: all clean fclean re bonus
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m



