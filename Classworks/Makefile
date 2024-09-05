
NAME = homework

UNAME := $(shell uname)

TMP = objs

ifeq ($(UNAME), Linux)

CXXFLAGS = -Wno-enum-conversion

CXX = g++ -std=c++2a

CFLAGS = -Wno-enum-conversion `pkg-config --cflags opencv`

LIBS =  -Wno-enum-conversion `pkg-config --libs opencv`

else ifeq ($(UNAME), Darwin)

CXXFLAGS = -Wno-enum-conversion

CXX = g++ -std=c++2a

CFLAGS = -Wno-enum-conversion -I/opt/homebrew/opt/opencv/include/opencv4

LIBS = -Wno-enum-conversion -L/opt/homebrew/opt/opencv/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc

endif

SRCS = $(wildcard src/*.cpp)

OBJS = $(patsubst src/%.cpp, ./$(TMP)/%.o, $(SRCS))

RM = rm -fr

HEADER = $(wildcard *.h)

HEADER += $(wildcard includes/*.h)

all: $(NAME)

./$(TMP)/%.o: ./src/%.cpp $(HEADER) Makefile
	@ $(CXX) $(CXXFLAGS) $(CFLAGS) -o $@ -c $<

$(NAME): $(TMP) $(OBJS)
	@ $(CXX) $(CXXFLAGS) $(OBJS) $(LIBS) -o $(NAME)
	@echo "$(GREEN)✅ $(NAME) created!$(DEFAULT)"

$(TMP):
	@mkdir $(TMP)

clean:
	@ $(RM) $(TMP)
	@echo "$(YELLOW)Object files deleted!$(DEFAULT)"

fclean: clean
	@ $(RM) $(NAME)
	@echo "$(RED)All deleted!$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean re bonus

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m
