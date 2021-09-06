CCPP 		= clang++ 
CC			= gcc
NAME		= lib++

CFLAGS		= -Wall -Werror -Wextra

BLACK		= \033[0;30m
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
PURPLE		= \033[0;35m
CYAN		= \033[0;36m
GRAY		= \033[0;37m
NC			= \033[0m

AR      	= ar rcs


SRC_DIR		=	./srcs/
OBJ_DIR		=	./objs/
INC			=	-I ./includes/



SRC			=	max.cpp
SRC			+=	vec.cpp

OBJ			=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp ./includes/*.hpp
	@$(CCPP) ${INC} $(CFLAGS) -c $< -o $@

all:
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(NAME) --no-print-directory

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?


clean:
	rm -rf $(OBJ_DIR) *.out

fclean: clean
	rm -f $(NAME)

eclean: clean fclean

re: fclean all

test: all main.cpp
	@$(CCPP) main.cpp lib++ $(INC)  $(NAME)  \
	&& clear \
	&& echo "---------------- main --------------" \
	&& ./a.out \
	&& echo '---------------- end ---------------'