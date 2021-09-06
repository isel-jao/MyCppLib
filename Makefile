C = clang++ -lm -g
CFLAG = clang++ -g -lm -Wall Werror Wextra
EXEC = executable

all: lib main.cpp
	@${C} main.cpp -I ./lib/includes/ -o ${EXEC}

lib:
	@make -C ./lib --no-print-directory

test: all
	@./${EXEC}

clean:
	@make clean -C ./lib --no-print-directory

fclean:
	@make fclean -C ./lib --no-print-directory
	@rm -rf ${EXEC}