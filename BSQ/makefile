SRCS_DIR = ./sources/

SRC = main.c checksquare.c fillsquare.c findsquare.c sizes.c ft_strcopy.c \
		printlarguestsquare.c solver.c squaresize.c printmap.c \
		ft_strlen.c create_map_matrix.c initialize_map.c\
	

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = ${SRCS:.c=.o}

HEADER_DIR = ./includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror 

OUTPUT = bsq

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

${OUTPUT} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${OUTPUT} ${SRCS_OBJ}

all : ${OUTPUT}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all

.PHONY : all clean fclean re

